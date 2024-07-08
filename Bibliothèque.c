#include <stdio.h>
#include <string.h>

#include "Bibliothèque.h"

void ajouter_livre(Bibliotheque *bibliotheque, const char *titre, const char *auteur, int anne_publication, int id)
{
    if (bibliotheque->nombre_livres >= MAX_LIVRES) {
        printf("La bibliothèque de %s est pleine.\n", bibliotheque->genre);
        return;
    }

    Livre nouveau_livre;
    strcpy(nouveau_livre.titre, titre);
    strcpy(nouveau_livre.titre, auteur);
    nouveau_livre.annee_publication = anne_publication;
    nouveau_livre.id = id;

    bibliotheque->Livres[bibliotheque->nombre_livres] = nouveau_livre;
    bibliotheque->nombre_livres++;
}