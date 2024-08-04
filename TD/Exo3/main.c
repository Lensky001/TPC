#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    float M_achat, Rabais, M_a_payer;

    printf("\t Magasin BJTech\n");
    printf("Saisir le montant d'achat : ");
    scanf("%f",&M_achat);

    if(M_achat < 10000)
    {
    Rabais = M_achat*0.05;
    M_a_payer =  M_achat - Rabais;

    printf("Rabais : %.2f\n", Rabais);
    printf("Montant a payer : %.2f\n",M_a_payer);
    }

    else if(1000 < M_achat < 15000){
    Rabais = M_achat*0.08;
    M_a_payer =  M_achat - Rabais;

    printf("Rabais : %.2f\n", Rabais);
    printf("Montant a payer : %.2f\n",M_a_payer);

    }

    else if(15000 < M_achat < 20000){
    Rabais = M_achat*0.12;
    M_a_payer =  M_achat - Rabais;

    printf("Rabais : %.2f\n", Rabais);
    printf("Montant a payer : %.2f\n",M_a_payer);

    }

    else if(M_achat <= 20000){
    Rabais = M_achat*0.15;
    M_a_payer =  M_achat - Rabais;

    printf("Rabais : %.2f\n", Rabais);
    printf("Montant a payer : %.2f\n",M_a_payer);

    }



    return 0;
}