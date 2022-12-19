#include <stdio.h>

//MÉDIA PODERADA

int main(){

    float prova1, prova2, notaTrabalho, soma = 0;
    
    printf("Insira a nota da 1° prova: ");
    scanf("%f", &prova1);

    printf("Insira a nota da 2° prova: ");
    scanf("%f", &prova2);

    printf("Insira a nota do trabalho ");
    scanf("%f", &notaTrabalho);

    soma = ((30 * prova1) + (50 * prova2) + (20 * notaTrabalho))/100;

    if (soma >= 7){
        printf("ALUNO APROVADO! COM A NOTA: %0.2f", soma);
    }
    else{
        printf("ALUNO REPROVADO! COM A NOTA: %0.2f", soma);
    }
    

    return 0;
}