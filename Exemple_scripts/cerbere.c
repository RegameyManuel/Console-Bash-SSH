#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>

#define MAX_CHARS 65536 // On utilise un tableau plus grand pour UTF-16 ou UTF-32

// Fonction pour lire le fichier
size_t read_file(const char *filename, wchar_t **buffer) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 0;
    }

    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *text = (char *)malloc(length + 1);
    fread(text, 1, length, file);
    text[length] = '\0';  // Terminer la chaîne

    fclose(file);

    // Convertir en wchar_t (UTF-32 sur certains systèmes, UTF-16 sur d'autres)
    size_t wchar_size = mbstowcs(NULL, text, 0) + 1;
    *buffer = (wchar_t *)malloc(wchar_size * sizeof(wchar_t));
    mbstowcs(*buffer, text, wchar_size);

    free(text);
    return wchar_size; // Retourner la taille du fichier en caractères
}

int main() {
    // Définir la locale pour gérer les caractères UTF-8
    setlocale(LC_ALL, "");

    // Démarrer le chronomètre
    clock_t start_time = clock();

    // Lire le fichier
    wchar_t *contents;
    size_t num_chars = read_file("Iliade.txt", &contents);
    if (num_chars == 0) {
        return EXIT_FAILURE;
    }

    // Créer un tableau pour stocker les occurrences de tous les caractères
    unsigned int counts[MAX_CHARS] = {0};

    // Compter les occurrences de chaque caractère
    for (size_t i = 0; i < num_chars; i++) {
        if ((unsigned int)contents[i] < MAX_CHARS) {
            counts[(unsigned int)contents[i]]++;
        }
    }
    free(contents);

    // Calculer le temps d'exécution en millisecondes
    clock_t end_time = clock();
    double execution_time_ms = (double)(end_time - start_time) / CLOCKS_PER_SEC * 1000;

    // Générer un fichier HTML pour afficher les résultats
    FILE *html_file = fopen("C_Cerb.html", "w");
    if (html_file == NULL) {
        perror("Erreur lors de la création du fichier HTML");
        return EXIT_FAILURE;
    }

    fprintf(html_file, "<!DOCTYPE html>\n");
    fprintf(html_file, "<html>\n");
    fprintf(html_file, "<head><title>C_Cerb</title></head>\n");
    fprintf(html_file, "<body>\n");
    fprintf(html_file, "<h1>Occurrences des caractères dans le fichier texte</h1>\n");
    fprintf(html_file, "<p><strong>Temps d'exécution : </strong>%.2f ms</p>\n", execution_time_ms);

    // Écrire le tableau des résultats
    fprintf(html_file, "<table border=\"1\">\n");
    fprintf(html_file, "<tr><th>Caractère</th><th>Occurrences</th></tr>\n");

    // Insérer les résultats dans le tableau HTML
    for (int i = 0; i < MAX_CHARS; i++) {
        if (counts[i] > 0) {
            wchar_t display_char[2] = {(wchar_t)i, L'\0'};
            char buffer[16];

            // Convertir wchar_t en une chaîne UTF-8 pour l'affichage
            wcstombs(buffer, display_char, sizeof(buffer));

            fprintf(html_file, "<tr><td>%s</td><td>%u</td></tr>\n", buffer, counts[i]);
        }
    }

    fprintf(html_file, "</table>\n");
    fprintf(html_file, "</body>\n");
    fprintf(html_file, "</html>\n");

    fclose(html_file);
    printf("Analyse terminée. Résultats écrits dans 'C_Cerb.html'. Temps d'exécution : %.2f ms.\n", execution_time_ms);
    
    return EXIT_SUCCESS;
}

