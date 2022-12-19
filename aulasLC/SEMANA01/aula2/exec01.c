#include <stdio.h>
//nome
//sexo
//profissao
//idade

//Desenvolva um programa que converta o valor de polegada para centimetro
//sendo a formula (p * 2,54)
int main(){


    float valorPolegada, centimetros = 0;

    printf("Insira o valor em polegada: ");
    scanf("%f", &valorPolegada);

    centimetros = valorPolegada * 2.54;

    printf("valor em centimetros: %0.2f ", centimetros);

    return 0;
}