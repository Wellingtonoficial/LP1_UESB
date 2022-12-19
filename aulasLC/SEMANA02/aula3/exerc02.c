#include <stdio.h>

int main(){

    int qtdNotas;
    float nota, media = 0;

    printf("Insira a quantidade de notas a serem inseridas: ");
    scanf("%d", &qtdNotas);

    for (int i = 1; i <= qtdNotas; i++){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        media = media + nota;
    }
    media = media / qtdNotas;
    printf("Media das notas: %0.2f ", media);
    
    
    return 0;
}

