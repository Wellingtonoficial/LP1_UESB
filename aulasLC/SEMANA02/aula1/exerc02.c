 #include <stdio.h>

 int main(){

   float altura;
   int idade, idiomas;
   
   printf("Digite sua idade: \n");
   scanf("%d", &idade);
   printf("Digite sua altura: \n");
   scanf("%f", &altura);
   printf("Digite a quatidade de idiomas: \n");
   scanf("%d", &idiomas);

//    if (idade >= 24 && altura >= 1.70 && idiomas >= 2)
//    {
//     printf("Voce atende os requisitos!");
//    }
//    else{
//     {
//     printf("Voce nao os requisitos!");
//    }
//    }

   if(idade < 24){
    printf("Nao aceita, pois sua idade e menor que 24!");
   }
   else if(altura < 1.7){
    printf("Nao aceita, pois sua altuta e menor que 1.7 m!");
   }
   else if(idiomas < 1.7){
    printf("Nao aceita, pois a qtd de idiomas e menor que 2!");
   }
   else{
    printf("Voce atende todos os requisitos!");
   }


    return 0;
 }