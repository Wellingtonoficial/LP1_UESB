#include <stdio.h>

int main(){

    printf("Insira sua idade: ");
    int idade;
    scanf("%d", &idade);

    if( idade < 18){
        printf("MENOR!");
    }
    else{
        printf("MAIOR!");
    }

    return 0;
}