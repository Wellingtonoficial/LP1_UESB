#include <stdio.h>

int main(){
    //C"int count = 1;" vai ser repetido apenas 1x

    //"Primeiro entra na codição " count <= 10;" 
    //dps impimi o "printf()"
    // por ultimo roda a expressão "count++"

    //após isso, repete tudo apartir do "count <= 10;"
    for(int count = 1; count <= 10; count++){
        printf("%d \n", count);
    }
    return 0;
}

//"continue" -> Interrompe a execução e continua a repetição
//"bleack" -> Interrompe a execução e sai do for