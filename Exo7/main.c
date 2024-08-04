#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int A, B, C, D;

    printf("Saisir la valeur de A : ");
    scanf("%d",&A);

    printf("Saisir la valeur de B : ");
    scanf("%d",&B);

    printf("Saisir la valeur de C : ");
    scanf("%d",&C);

    D = B;
    B = A;
    A = C;
    C = D;

    printf("\t Nouvelles valeurs : \n");
    printf("\t A = %d, B = %d, C = %d \n", A, B, C); 





    return 0;
}