#include <stdio.h>

int main(){

    int n;
    printf("Insira um valor maior que 1: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("%d \n", i);
        }
        i++;
        // printf("%d \n", i);
    }
    return 0;
}

