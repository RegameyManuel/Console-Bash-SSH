### Outils de Développement Couramment Utilisés en Console

#### 1. **Git**
   - **Description:** Système de contrôle de version distribué.
   - **Commandes Courantes:**
     ```sh
     git clone https://github.com/user/repo.git
     git status
     git add .
     git commit -m "Commit message"
     git push origin main
     ```

#### 2. **SSH (Secure Shell)**
   - **Description:** Protocole réseau pour des connexions sécurisées à distance.
   - **Commandes Courantes:**
     ```sh
     ssh user@hostname
     ssh-keygen -t rsa -b 4096
     ssh-copy-id user@hostname
     ```

#### 3. **Apache2**
   - **Description:** Serveur HTTP open source.
   - **Commandes Courantes:**
     ```sh
     sudo systemctl start apache2
     sudo systemctl stop apache2
     sudo systemctl restart apache2
     sudo systemctl status apache2
     ```

#### 4. **Nginx**
   - **Description:** Serveur web et proxy inverse.
   - **Commandes Courantes:**
     ```sh
     sudo systemctl start nginx
     sudo systemctl stop nginx
     sudo systemctl restart nginx
     sudo systemctl status nginx
     ```

#### 5. **Nano**
   - **Description:** Éditeur de texte en ligne de commande.
   - **Commandes Courantes:**
     ```sh
     nano filename.txt
     ```

#### 6. **Vim**
   - **Description:** Éditeur de texte avancé en ligne de commande.
   - **Commandes Courantes:**
     ```sh
     vim filename.txt
     ```

#### 7. **Emacs**
   - **Description:** Éditeur de texte extensible et personnalisable.
   - **Commandes Courantes:**
     ```sh
     emacs filename.txt
     ```

#### 8. **Curl**
   - **Description:** Outil de transfert de données avec des URL.
   - **Commandes Courantes:**
     ```sh
     curl -O https://example.com/file.zip
     curl -X POST -d "param1=value1&param2=value2" https://example.com/api
     ```

#### 9. **Wget**
   - **Description:** Outil pour télécharger des fichiers depuis le web.
   - **Commandes Courantes:**
     ```sh
     wget https://example.com/file.zip
     ```

#### 10. **Docker**
   - **Description:** Outil de conteneurisation.
   - **Commandes Courantes:**
     ```sh
     docker run -d -p 80:80 nginx
     docker ps
     docker stop <container_id>
     ```

#### 11. **Make**
   - **Description:** Outil de build automation.
   - **Commandes Courantes:**
     ```sh
     make
     make clean
     ```

#### 12. **NPM (Node Package Manager)**
   - **Description:** Gestionnaire de paquets pour Node.js.
   - **Commandes Courantes:**
     ```sh
     npm install
     npm start
     npm run build
     ```

#### 13. **Yarn**
   - **Description:** Gestionnaire de paquets rapide, sécurisé et fiable pour Node.js.
   - **Commandes Courantes:**
     ```sh
     yarn install
     yarn start
     yarn build
     ```

#### 14. **Python**
   - **Description:** Interpréteur pour le langage de programmation Python.
   - **Commandes Courantes:**
     ```sh
     python script.py
     python -m venv myenv
     source myenv/bin/activate
     ```

#### 15. **Pip**
   - **Description:** Gestionnaire de paquets pour Python.
   - **Commandes Courantes:**
     ```sh
     pip install package_name
     pip list
     pip freeze > requirements.txt
     ```

#### 16. **Composer**
   - **Description:** Gestionnaire de dépendances pour PHP.
   - **Commandes Courantes:**
     ```sh
     composer install
     composer update
     composer require vendor/package
     ```

#### 17. **Ruby**
   - **Description:** Interpréteur pour le langage de programmation Ruby.
   - **Commandes Courantes:**
     ```sh
     ruby script.rb
     irb # Interactive Ruby Shell
     ```

#### 18. **Gem**
   - **Description:** Gestionnaire de paquets pour Ruby.
   - **Commandes Courantes:**
     ```sh
     gem install package_name
     gem list
     ```

#### 19. **Rails**
   - **Description:** Framework web pour Ruby.
   - **Commandes Courantes:**
     ```sh
     rails new myapp
     rails server
     rails generate model User
     ```

#### 20. **Java**
   - **Description:** Interpréteur pour le langage de programmation Java.
   - **Commandes Courantes:**
     ```sh
     javac MyProgram.java
     java MyProgram
     ```

#### 21. **Maven**
   - **Description:** Outil de gestion de projets et de build pour Java.
   - **Commandes Courantes:**
     ```sh
     mvn clean install
     mvn package
     ```

#### 22. **Gradle**
   - **Description:** Outil de build automation pour des projets multi-langages.
   - **Commandes Courantes:**
     ```sh
     gradle build
     gradle clean
     ```

#### 23. **GCC (GNU Compiler Collection)**
   - **Description:** Compilateur pour C, C++, et autres langages.
   - **Commandes Courantes:**
     ```sh
     gcc -o myprogram myprogram.c
     g++ -o myprogram myprogram.cpp
     ```

#### 24. **GDB (GNU Debugger)**
   - **Description:** Débogueur pour les programmes compilés avec GCC.
   - **Commandes Courantes:**
     ```sh
     gdb myprogram
     ```

#### 25. **MySQL/MariaDB**
   - **Description:** SGBD (Système de Gestion de Base de Données) relationnel.
   - **Commandes Courantes:**
     ```sh
     mysql -u root -p
     CREATE DATABASE mydb;
     USE mydb;
     ```

#### 26. **PostgreSQL**
   - **Description:** SGBD relationnel avancé.
   - **Commandes Courantes:**
     ```sh
     psql -U postgres
     CREATE DATABASE mydb;
     \c mydb
     ```

#### 27. **MongoDB**
   - **Description:** Base de données NoSQL orientée documents.
   - **Commandes Courantes:**
     ```sh
     mongo
     use mydb
     db.mycollection.insert({name: "example"})
     ```

#### 28. **Redis**
   - **Description:** Base de données NoSQL en mémoire, clé-valeur.
   - **Commandes Courantes:**
     ```sh
     redis-cli
     SET mykey "value"
     GET mykey
     ```

