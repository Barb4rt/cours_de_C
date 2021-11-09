#include <stdio.h>
#include <stdlib.h>
#include "MoyenneTableau.h"
#include "CreeUnFichier.h"

int main(int argc, char *argv[])
{
    int i;
    int tableauDeNotes[3][4] = {};
    char nomEleve1[100],nomEleve2[100],nomEleve3[100];
    double moyenneEleve1,moyenneEleve2,moyenneEleve3,moyenneTotal;

    //Recuperer le prenom de l'eleve et le stocker dans un tableau

    printf(" Entrez le prénom de l'élève \n");

    scanf("%s", &nomEleve1);

    //Recuperer les notes de l'élève et les stocker dans un tableau

    printf(" Entrez les notes de %s \n", &nomEleve1);
       for (i = 0; i < 4; i++){
            scanf("%d", &tableauDeNotes[0][i]);
       }

    moyenneEleve1 = moyenneTableau(tableauDeNotes[0], 4);

    printf("La moyenne de  %s est %f\n\n", &nomEleve1 ,moyenneEleve1);


    //Recuperer le prenom de l'eleve et le stocker dans un tableau

    printf(" Entrez le prénom de l'élève \n");

        scanf("%s", &nomEleve2);


    //Recuperer les notes de l'élève et les stocker dans un tableau

    printf(" Entrez les notes de %s \n", &nomEleve2);
       for (i = 0; i < 4; i++){
            scanf("%d", &tableauDeNotes[1][i]);
       }

    moyenneEleve2 = moyenneTableau(tableauDeNotes[1], 4);

    printf("La moyenne de %s est %f\n\n", &nomEleve2 , moyenneEleve2);


    //Recuperer le prenom de l'eleve et le stocker dans un tableau

    printf(" Entrez le prénom de l'élève \n");
        scanf("%s", &nomEleve3);

    //Recuperer les notes de l'élève et les stocker dans un tableau

    printf(" Entrez les notes de %s:\n",&nomEleve3);
        for (i = 0; i < 4; i++){
            scanf("%d", &tableauDeNotes[2][i]);
        }

    moyenneEleve3 = moyenneTableau(tableauDeNotes[2], 4);

    printf("La moyenne de %s est %f\n\n", &nomEleve3, moyenneEleve3);

    int tableauDeMoyennes[3]={moyenneEleve1,moyenneEleve2,moyenneEleve3};

    moyenneTotal=moyenneTableau(tableauDeMoyennes, 3);

    printf("La moyenne de la classe est %f\n\n", moyenneTotal);

    //creation de fichier texte
    FILE* fichier= NULL;
    fichier = fopen("test.txt", "w+");
    if (fichier != NULL)
    {
        for(i = 0 ; i < 3 ; i++)
        {
            fprintf(fichier, "\n note 1 : %d \n note 2 : %d \n note 3 : %d \n note 4 : %d \n\n ", tableauDeNotes[i][0],tableauDeNotes[i][1],tableauDeNotes[i][2],tableauDeNotes[0][3]);
        }
        fclose(fichier);
    }
    return 0;
}


