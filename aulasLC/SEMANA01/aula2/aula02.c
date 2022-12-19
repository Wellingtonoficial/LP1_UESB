#include <stdio.h>
//nome
//sexo
//profissao
//idade
int main(){

    float nota1, nota2, nota3, nota4, media =0;

    printf("Insira a nota do primeiro aluno: ");
    scanf("%f", &nota1);
    printf("Insira a nota do segundo aluno: ");
    scanf("%f", &nota2);
    printf("Insira a nota do terceiro aluno: ");
    scanf("%f", &nota3);
    printf("Insira a nota do quarto aluno: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4 ) / 4;

    printf("A media das quatros notas e: %0.2f ", media);

    return 0;
}