#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choix;
    float R1, R2, R3;

    printf("Saisir la valeur de R1 :\n");
    scanf("%f",&R1);

    printf("Saisir la valeur de R2 :\n");
    scanf("%f",&R2);
            
    printf("Saisir la valeur de R3 :\n");
    scanf("%f",&R3);

    printf("Choisir 1 si les resistances sont branchees en series et 2 si elles sont branchees en paralleles :\n");
    scanf("%d",&choix);

    switch(choix) {

        case 1: {
           
            printf("La resistance equivalente est : %.2f\n", R1+R2+R3);
            break;
        }

        case 2: {
            printf("La resistance equivalente est : %.2f\n", (R1*R2*R3)/((R1*R2)+(R1*R3)+(R2*R3)));
            break;
        } 
        default : {
            printf("Mauvais choix !\n");
            break;
            }
    }

    
    return 0;
    }