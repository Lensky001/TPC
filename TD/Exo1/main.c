#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)

{
    float x, y, z, a;
    printf("Saisir la coordonnee x : ");
    scanf("%f",&x);

    printf("Saisir la coordonnee y : ");
    scanf("%f",&y);

    printf("Saisir la coordonnee z : ");
    scanf("%f",&z);

    a = pow(x,2) + pow(y,2) + pow(z,2);

    printf("La norme de ce vecteur est : %.2f \n", sqrt(a));

    return 0;
}