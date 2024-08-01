#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y;
    int n;
    printf("Saisir le nombre : \n");
    scanf("%f",&x);

    printf("Saisir la puissance : \n");
    scanf("%d",&n);

    y=pow(x,n);

    printf("%.2f a la puissance %d a pour resultat %.2f.", x, n, y);

    return 0;
}