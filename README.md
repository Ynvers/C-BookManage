# Gestionnaire de Bibliothèque

Ce projet est un simple gestionnaire de bibliothèques écrit en C. Il permet d'ajouter, de visualiser des livres dans des bibliothèques de différents genres, et de créer de nouvelles bibliothèques.

## Table des matières
- [Fonctionnalités](#fonctionnalités)
- [Structure du projet](#structure-du-projet)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Contribuer](#contribuer)

## Fonctionnalités
- Ajouter un livre à une bibliothèque spécifique.
- Afficher toutes les bibliothèques et leurs livres.
- Ajouter une nouvelle bibliothèque.

## Structure du projet
C-BOOKMANAGE
│
├── include
│ ├── Bibliotheque.h
│ └── Livre.h
│
├── src
│ ├── Bibliotheque.c
│ └── main.c
│
├── README.md
├── Makefile
└── LICENSE (à retirer si vous n'avez pas de fichier)

- include/ : Contient les fichiers d'en-tête.
- src/ : Contient les fichiers source.
- README.md : Documentation du projet.
- Makefile : Fichier pour automatiser la compilation.

## Installation

### Prérequis

- Un compilateur C (gcc recommandé)
- Make

### Étapes

1. Clonez le dépôt :

    ```sh
    git clone https://github.com/votre-utilisateur/C-BookMange.git
    cd C-BookMange
    ```

2. Compilez le programme :

    ```sh
    make
    ```

## Utilisation

1. Exécutez le programme compilé :

    ```sh
    ./C-BookMange
    ```

2. Suivez les instructions à l'écran pour ajouter des livres, afficher les bibliothèques, ou ajouter une nouvelle bibliothèque.

## Contribuer

Les contributions sont les bienvenues ! Veuillez suivre les étapes ci-dessous pour contribuer :

1. Forkez le projet
2. Créez une branche pour votre fonctionnalité (`git checkout -b feature/AmazingFeature`)
3. Commitez vos modifications (`git commit -m 'Add some AmazingFeature'`)
4. Poussez à la branche (`git push origin feature/AmazingFeature`)
5. Ouvrez une Pull Request
