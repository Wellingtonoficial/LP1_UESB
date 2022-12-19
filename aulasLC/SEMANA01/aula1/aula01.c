#include <stdio.h>
int main(){

    float salario = 0;

    printf("Insira seu salario: ");
    scanf("%f", &salario);

    printf("Voce recebe R$ %0.3f mensal", salario);

    return 0;
}