#include <stdio.h>
#include <stdlib.h>

double convertisseur(double inputValue, double devise);

int main(int argc, char *argv[])
{
    int userChoice;
    double userValue;


    printf("Voulez-vous convertir en Dollar 1 ou en Euro 2 ? \n Taper 1 ou 2\n");
    scanf("%d", &userChoice);
        if(userChoice == 1){
            printf("\nEntrez une somme en Euro\n");
            scanf("%lf", &userValue);
            userValue = convertisseur(userValue, 1.16);
            printf("\nça fait %lf USD",userValue);
        }
        else if(userChoice == 2){
            printf("\nEntrez une somme en Dollars\n");
            scanf("%lf", &userValue);
            userValue = convertisseur(userValue, 0.86);
            printf("\nça fait %lf EUR",userValue);
        }
        else{
            printf("Je ne comprend pas vôtre choix");
        }


    return 0;
}

double convertisseur(double inputValue, double devise){
    double convertValue = inputValue*devise;
    return convertValue;
}
