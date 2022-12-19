#include <stdio.h>
#include <math.h> //Insere varios tipos de funções matematicas

//Entre com o raio da esfera e retorne o volume dela
//Formula -> (4/3) * pi * (raio^3)
int main(){

    float raio;

    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    float volume = (4.0/3.0) * M_PI * (pow(raio,3));// ("M_PI"É UMA FUNÇÃO PRECISSA DO VALOR DE PI) (POW() é uma função onde pode usar qualquer elevação)

    printf("O volume de uma esfera de raio %0.2f = %0.2f ", raio, volume); 

    return 0;
}