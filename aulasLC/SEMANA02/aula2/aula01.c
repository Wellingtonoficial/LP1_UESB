#include <stdio.h>

int main(){

    // int valorMax, cont = 1;

    // printf("Insira um valor maior que 1: ");
    // scanf("%d", &valorMax);

    // while(cont <= valorMax){
    //     printf("%d \n", cont);
    //     cont++;
    // }

    // int a=1;

    // int b = 200;

    // while (b > 35)
    // {
    //     b -= 35;
    //     a += b;
    // }
    // printf("%d", a);


    int c=10;
    int a = 1;

    while (a <= 5){
        int b =1;
        while (b <= 5){
            b++;
            c = c*2;
            printf("%d \n", c); 
        } 
         a++;
        printf("%d \n\n", c); 
    }
   

    return 0;
}