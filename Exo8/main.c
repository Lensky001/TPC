#include <stdlib.h>
#include <stdio.h>

int main (void)

{

    int choix;

    printf("\t Programme qui calcule la somme de quatre nombres du type int entres au clavier\n");
    printf("1.En se servant de 5 variables\n");
    printf("2.En se servant de 2 variables\n");
    printf("Faites votre choix\n");
    scanf("%d",&choix);

    switch(choix) {

        case 1:{
            int a, b, c, d, e;
            printf("Saisir un nombre : ");
            scanf("%d",&a);

            printf("Saisir un nombre : ");
            scanf("%d",&b);

            printf("Saisir un nombre : ");
            scanf("%d",&c);

            printf("Saisir un nombre : ");
            scanf("%d",&d);

            e = a + b + c +d;

            printf("Resultat : %d\n",e);
            break;
        }

        case 2:{
            int a, b = 0;

            printf("Saisir un nombre : ");
            scanf("%d",&a);

            b = b + a;

            printf("Saisir un nombre : ");
            scanf("%d",&a);

            b = b + a;

            printf("Saisir un nombre : ");
            scanf("%d",&a);

            b = b + a;

            printf("Saisir un nombre : ");
            scanf("%d",&a);

            b = b + a;

            printf("Resultat : %d\n",b);
            break;

            default : printf("Mauvais choix !\n");
        }

    }

    return 0;
}