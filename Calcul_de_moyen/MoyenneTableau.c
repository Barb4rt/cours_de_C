#include <stdlib.h>
#include <stdio.h>
#include "MoyenneTableau.h"


int moyenneTableau(int tableau[], int tailleTableau){

    double moyenne = 0;
    int somme = 0;

    for(int i = 0 ; i < tailleTableau ; i++){

        somme = somme+tableau[i];
    }

    moyenne = somme/tailleTableau;

    return moyenne;
}
