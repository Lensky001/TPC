#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    b=3.14;
    printf("Quel est le rayon du cercle?\n");
    scanf("%f",&a);
    printf("Ce cercle a une surfaace de %.2f et son perimetre est %.2f", b*a*a, 2*b*a);
    return 0;
}
