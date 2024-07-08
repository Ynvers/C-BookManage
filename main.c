 #include <stdio.h>
 #include <string.h>

 #include "Livre.h"
 #include "Bibliothèque.h"

int main() {
    printf("Bienvenue dans le gestionnaire de bibliothèque!\n");

    Bibliotheque bibliotheques[2] = {
        {"Science-Fiction", {}, 0},
        {"Comedie-Romantique", {}, 0},
    };

    ajouter_livre(&bibliotheques[0], "Le Petit Prince", "Antoine de Saint-Exupéry", 1943, 1);
    ajouter_livre(&bibliotheques[1], "Sapiens", "Yuval Noah Haraki", 2011, 2);

    for (int i = 0; i < 2; i++) {
        printf("Genre: %s\n", bibliotheques[i].genre);
        for (int j = 0; j < bibliotheques[i].nombre_livres; j++) {
            printf("ID: %d\nTitre: %s\nAuteur: %s\nAnnée de publication: %d\n\n",
                bibliotheques[i].Livres[j].id, bibliotheques[i].Livres[j].titre,
                bibliotheques[i].Livres[j].auteur, bibliotheques[i].Livres[j].annee_publication);
        }
    }

    return 0;
}