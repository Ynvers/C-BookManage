#ifndef LIVRE_H
#define LIVRE_H

typedef struct Livre
{
    char titre[100];
    char auteur[100];
    int annee;
    int id;
} Livre;

//Déclaration de la fonction pour afficher un livre
void afficher_livre(Livre livre);


#endif 