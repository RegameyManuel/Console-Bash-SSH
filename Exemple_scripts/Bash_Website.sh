#!/bin/bash

# Variables de connexion à la base de données
DB_HOST="localhost"
DB_USER="admin"
DB_PASS="Afpa1234"
DB_NAME="restaurant"

# Nom du fichier de sortie HTML
OUTPUT_FILE="plats.html"

# Exécuter la requête SQL pour récupérer la liste des plats et leurs catégories
QUERY="SELECT plat.nom_plat, categorie.nom_categorie, plat.prix 
       FROM plat 
       JOIN categorie ON plat.id_categorie = categorie.id_categorie;"

# Récupérer les données depuis la base de données
DATA=$(mysql -h $DB_HOST -u $DB_USER -p$DB_PASS -D $DB_NAME -se "$QUERY")

# Créer le fichier HTML
echo "<!DOCTYPE html>" > $OUTPUT_FILE
echo "<html>" >> $OUTPUT_FILE
echo "<head><title>Liste des plats</title></head>" >> $OUTPUT_FILE
echo "<body>" >> $OUTPUT_FILE
echo "<h1>Liste des plats</h1>" >> $OUTPUT_FILE
echo "<table border='1'>" >> $OUTPUT_FILE
echo "<tr><th>Nom du Plat</th><th>Catégorie</th><th>Prix</th></tr>" >> $OUTPUT_FILE

# Parcourir les données et les écrire dans le fichier HTML
IFS=$'\n'
for row in $DATA; do
    # Séparer les colonnes par tabulations
    IFS=$'\t' read -r nom_plat nom_categorie prix <<< "$row"
    
    # Ajouter une ligne au tableau HTML
    echo "<tr><td>$nom_plat</td><td>$nom_categorie</td><td>$prix €</td></tr>" >> $OUTPUT_FILE
done

# Fermer les balises HTML
echo "</table>" >> $OUTPUT_FILE
echo "</body>" >> $OUTPUT_FILE
echo "</html>" >> $OUTPUT_FILE

# Afficher un message de confirmation
echo "Le fichier HTML a été généré : $OUTPUT_FILE"
echo "Lancement de : $OUTPUT_FILE"

firefox $OUTPUT_FILE
