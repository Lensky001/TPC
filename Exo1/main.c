#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Saisir la valeur du premier nombre: ");
    scanf("%d",&a);

    printf("Saisir le second nombre: ");
    scanf("%d",&b);

    printf("La somme vaut : %d\n", a+b);
    printf("La difference vaut : %d\n", a-b);
    printf("Le produit vaut : %d\n", a*b);
    printf("Le quotient du premier par le second vaut : %d\n", a/b);
    return 0;
}
