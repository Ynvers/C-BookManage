#ifndef LIVRE_H
#define LIVRE_H

struct Livre
{
    char titre[100];
    char auteur[100];
    int annee;
    int id;
};

//Déclaration de la fonction pour afficher un livre
void afficher_livre(struct Livre livre);


#endif 