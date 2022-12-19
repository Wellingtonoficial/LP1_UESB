#include <stdio.h>

//Faça um programa que leia o valor de um produto e imprima o valor com o desconto, tendo
// em vista que o desconto foi de 12%
int main(){

    float valorProduto;

    printf("Insira o valor do produto: ");
    scanf("%f", &valorProduto);

    float desconto = valorProduto - ((12 * valorProduto)/100);


    printf("Valor com o desconto: R$ %0.2f ", desconto);
    

    return 0;
}