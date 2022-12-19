 #include <stdio.h>

 int main(){

    //x++ ->Incremento pós-fixado(INCREMENTA DPS)
    //++x ->Incremento pré-fixado(INCREMENTA ANTES)

    float salario, aliquota, deducao, impostoMensal = 0, impostoAnual = 0;
    printf("Insira seu lario bruto: ");
    scanf("%f", &salario);

    if(salario < 1903.99){
        aliquota = 0;
        deducao = 0;

    }
    else if(salario < 2826.65){
        aliquota = 7.5;
        deducao = 142.8;

    }
    else if(salario < 3751.05){
        aliquota = 15;
        deducao = 354.8;

    }
    else if(salario < 4664.68){
        aliquota = 22.5;
        deducao = 636.13;

    }
    else if(salario > 4664.68){
        aliquota = 27.5;
        deducao = 869.36;

    }

    impostoMensal = ((salario * aliquota)/100) - deducao;
    impostoAnual = impostoMensal * 12;

    printf("Valor da liquota: %0.2f \n", aliquota);
    printf("Valor mensal do imposto a ser pago: R$ %0.2f \n", impostoMensal);
    printf("Valor anual do imposto a ser pago: R$ %0.2f \n", impostoAnual);

    return 0;
 }