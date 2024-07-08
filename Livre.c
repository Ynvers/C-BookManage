#include <stdio.h>

#include "Livre.h"

//Implémentation de la fonction pour afficher les détails d'un livre
void afficher_livre(Livre livre) {
    printf("============\n");
    printf("Titre : %s\n", livre.titre);
    printf("Auteur : %s\n", livre.auteur);
    printf("Annee de parution : %d\n", livre.annee);
    printf("=============\n");
}