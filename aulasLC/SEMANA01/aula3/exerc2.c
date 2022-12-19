#include <stdio.h>

//DESENVOLVA UM PROGRAMA QUE DER A ENTRADA DE UM VALOR DE UM PREMIU
// GANHADOR 1 GANHA 46%. O 2 GANHA 32% E O TERCEIRO GANHA O RESTANTE

int main(){

    float valorPremiacao;

    printf("Insira o valor da premiacao: ");
    scanf("%f", &valorPremiacao);
    

    float ganhador01 = 0, ganhador02 = 0, ganhador03 = 0;

    ganhador01 = (46 * valorPremiacao)/ 100;
    ganhador02 = (32 * valorPremiacao)/ 100;
    ganhador03 = valorPremiacao - (ganhador01 + ganhador02);

    printf("Premiu do primeiro ganhador: R$ %0.2f ", ganhador01);
    printf("Premiu do segundo ganhador: R$ %0.2f ", ganhador02);
    printf("Premiu do terceiro ganhador: R$ %0.2f ", ganhador03);
    

    return 0;
}