#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include "Livre.h"

#define MAX_LIVRES 100
#define MAX_BIBLIOTHEQUES 50

typedef struct {
    char genre[50];
    Livre Livres[MAX_LIVRES];
    int nombre_livres;
} Bibliotheque;

void ajouter_livre(Bibliotheque *bibliotheque);
void afficher_bibliotheque(Bibliotheque *bibliotheques, int nb_bibliotheques);
void ajouter_bibliotheque(Bibliotheque *bibliotheques, int *nb_bibliotheques);

#endif