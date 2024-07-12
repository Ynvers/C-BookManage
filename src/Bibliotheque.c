#include <stdio.h>
#include <string.h>

#include "Bibliotheque.h"

void ajouter_livre(Bibliotheque *bibliotheque) {
    if (bibliotheque->nombre_livres >= MAX_LIVRES) {
        printf("La bibliothèque de %s est pleine.\n", bibliotheque->genre);
        return;
    }

    Livre nouveau_livre;
    printf("Entrez le titre du livre: ");
    fgets(nouveau_livre.titre, 100, stdin);
    nouveau_livre.titre[strcspn(nouveau_livre.titre, "\n")] = '\0'; // Enlever le retour à la ligne

    printf("Entrez l'auteur du livre: ");
    fgets(nouveau_livre.auteur, 100, stdin);
    nouveau_livre.auteur[strcspn(nouveau_livre.auteur, "\n")] = '\0';

    printf("Entrez l'année de publication: ");
    scanf("%d", &nouveau_livre.annee_publication);
    getchar(); // Pour consommer le retour à la ligne restant

    printf("Entrez l'identifiant unique (ID): ");
    scanf("%d", &nouveau_livre.id);
    getchar(); // Pour consommer le retour à la ligne restant

    bibliotheque->Livres[bibliotheque->nombre_livres] = nouveau_livre;
    bibliotheque->nombre_livres++;
}

void afficher_bibliotheque(Bibliotheque *bibliotheques, int nb_bibliotheques) {
    printf("Nombre de bibliothèques: %d\n", nb_bibliotheques);
    for (int i = 0; i < nb_bibliotheques; i++) {
        printf("Genre: %s\n", bibliotheques[i].genre);
        for (int j = 0; j < bibliotheques[i].nombre_livres; j++) {
            printf("ID: %d\nTitre: %s\nAuteur: %s\nAnnée de publication: %d\n\n",
                bibliotheques[i].Livres[j].id, bibliotheques[i].Livres[j].titre,
                bibliotheques[i].Livres[j].auteur, bibliotheques[i].Livres[j].annee_publication);
        }
    }
}

void ajouter_bibliotheque(Bibliotheque *bibliotheques, int *nb_bibliotheques) {
    if (*nb_bibliotheques >= MAX_BIBLIOTHEQUES) {
        printf("Nombre maximum de bibliothèques atteint.\n");
        return;
    }

    printf("Entrez le genre de la nouvelle bibliothèque: ");
    fgets(bibliotheques[*nb_bibliotheques].genre, 50, stdin);
    bibliotheques[*nb_bibliotheques].genre[strcspn(bibliotheques[*nb_bibliotheques].genre, "\n")] = '\0'; // Enlever le retour à la ligne
    bibliotheques[*nb_bibliotheques].nombre_livres = 0;

    (*nb_bibliotheques)++;
}
