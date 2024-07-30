#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Quelle est la valeur de A ?\n");
    scanf("%d",&a);

    printf("Quelle est la valeur de B ?\n");
    scanf("%d",&b);

    c=a;

    printf("La nouvelle valeur de A est %d et la nouvelle valeur de B est %d.", b, c);
    return 0;
}
