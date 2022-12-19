
#include <stdio.h>

int main(){

    // int n1 = 5, n2 =7;
    // if (!(n1 == n2))//"!" NEGAÇÃO
    // {
    //     printf("Verdade");
    // }
    // else{
    //     printf("Falso");
    // }


    printf("Qual seu gasto de calorias diario? ");
    float calorias;
    scanf("%f", &calorias);

    if (calorias >= 1200 && calorias <= 1900)
    {
        printf(" Sua quantidade de  calorias encontrasse na faixa de seguranca! Calorias: %0.2f ", calorias);
    }
    else{
        printf(" Sua quantidade de  calorias nao encontrasse na faixa de seguranca! Calorias: %0.2f ", calorias);
    }
    

    return 0;
}