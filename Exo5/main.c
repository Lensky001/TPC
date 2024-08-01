#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double xA, yA, xB, yB, distance;
    printf("Saisir la valeur de xA :\n");
    scanf("%lf",&xA);

    printf("Saisir la valeur de yA :\n");
    scanf("%lf",&yA);

    printf("Saisir la valeur de xB : \n");
    scanf("%lf",&xB);

    printf("Saisir la valeur de yB : \n");
    scanf("%lf",&yB);
    
    distance = sqrt(pow((xB - xA),2) + pow((yB - yA),2));

    printf("La distance entre le point A(%.2lf , %.2lf) et le point B(%.2lf , %.2lf) est %.2lf unite(s)\n", xA, yA, xB, yB, distance);


    return 0;
}