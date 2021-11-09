#include <stdio.h>

void creeUnFichier(int tableauDeDonnees[][4]){

    printf("---------------------%d", tableauDeDonnees[0][0]);
    int i;

    FILE* fichier= NULL;

    fichier = fopen("test.txt", "a+");

    if (fichier != NULL)
    {
        //for(i = 0 ; i < 3 ; i++)
        //{
         //fscanf(fichier, "Eleve 1 %d %d %d %d", &tableauDeDonnees[i][0],&tableauDeDonnees[i][1],&tableauDeDonnees[i][2],&tableauDeDonnees[0][3]);
        //}
        fclose(fichier);
    }

    return 0;

}
