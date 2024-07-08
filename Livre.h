#ifndef LIVRE_H
#define LIVRE_H

typedef struct Livre
{
    char titre[100];
    char auteur[100];
    int annee_publication;
    int id;
} Livre;

#endif