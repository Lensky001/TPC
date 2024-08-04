#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    float d_cone, h_cone, r_cylindre, h_cylindre, v_cone, v_cylindre;

    printf("Diametre du cone : ");
    scanf("%f",&d_cone);

    printf("Hauteur du cone : ");
    scanf("%f",&h_cone);

    v_cone = (3.14*pow(d_cone,2)*h_cone)/12;

    printf("Rayon du cylindre : ");
    scanf("%f",&r_cylindre);

    printf("Hauteur du cylindre : ");
    scanf("%f",&h_cylindre);

    v_cylindre = 3.14*pow(r_cylindre,2)* r_cylindre; 

    printf("Volume du cone : %.2f\n",v_cone);
    printf("Volume du cylindre : %.2f\n",v_cylindre);
    printf("Moyenne arithmetique des deux volumes : %.2f\n", (v_cone + v_cylindre)/2);





}