 #include <stdio.h>
 #include <string.h>

 #include "Livre.h"
 #include "Bibliotheque.h"

void afficher_menu();

int main() {
    Bibliotheque bibliotheques[2] = {
        {"Science-Fiction", {}, 0},
        {"Comedie-Romantique", {}, 0},
    };

    int choix;
    int nb_bibliotheques = 2;

    while (1)
    {
        afficher_menu();
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1:
                printf("Choisissez la bibliotheque: ");
                int index_biblio;
                scanf("%d", &index_biblio);
                getchar();
                if (index_biblio >= 0 && index_biblio < nb_bibliotheques) {
                    ajouter_livre(&bibliotheques[index_biblio]);
                } else {
                    printf("Bibliotheque invalide .\n");
                }
                break;
            
            case 2:
                afficher_bibliotheque(bibliotheques, nb_bibliotheques);
                break;
            
            case 3:
                ajouter_bibliotheque(bibliotheques, &nb_bibliotheques);
                break;
            case 4:
                printf("Au revoir!\n");
                return 0;
            default:
                printf("Cjoix invalide, veuillez reessayer.\n");
        }
    }
    

  /*  ajouter_livre(&bibliotheques[0], "Le Petit Prince", "Antoine de Saint-Exupéry", 1943, 1);
    ajouter_livre(&bibliotheques[1], "Sapiens", "Yuval Noah Haraki", 2011, 2);

    for (int i = 0; i < 2; i++) {
        printf("Genre: %s\n", bibliotheques[i].genre);
        for (int j = 0; j < bibliotheques[i].nombre_livres; j++) {
            printf("ID: %d\nTitre: %s\nAuteur: %s\nAnnée de publication: %d\n\n",
                bibliotheques[i].Livres[j].id, bibliotheques[i].Livres[j].titre,
                bibliotheques[i].Livres[j].auteur, bibliotheques[i].Livres[j].annee_publication);
        }
    }
*/
    return 0;
}

void afficher_menu() {
    printf("Bienvenue dans le gestionnaire de bibliothèque!\n");
    printf("1. Ajouter un livre\n");
    printf("2. Afficher les bibliothèques\n");
    printf("3. Ajouter une nouvelle bibliothèque\n");
    printf("4. Quitter\n");
    printf("Veuillez entrer votre choix: ");
}

