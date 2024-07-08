#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include "Livre.h"

#define MAX_LIVRES 100

typedef struct {
    char genre[50];
    Livre Livres[MAX_LIVRES];
    int nombre_livres;
} Bibliotheque;

void ajouter_livre(Bibliotheque *bibliotheque, const char *titre, const char *auteur, int anne_publication, int id);

#endif