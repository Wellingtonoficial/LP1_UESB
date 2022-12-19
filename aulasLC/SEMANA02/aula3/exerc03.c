#include <stdio.h>

int main(){

   float qtdPedidos, qtdIntens, mediaItens = 0, comissao = 0, somaComissao = 0, valorItems, cont = 0;

   printf("Informe a qtd de pedidos: ");
   scanf("%f", &qtdPedidos);

   for(int i = 1; i <= qtdPedidos; i++){

        printf("Informe a qtd de itens vendidos no pedido de numero %d : ", i);
        scanf("%f", &qtdIntens);
        printf("Informe o valor total em R$ dos itens do pedido de numero %d : ", i);
        scanf("%f", &valorItems);

            if(qtdIntens < 20){
                comissao = (10 * valorItems)/100;
                printf("valor de comissao: R$ %0.2f\n",comissao);

                mediaItens += qtdIntens / qtdPedidos;
                cont++;
            }
            else if(qtdIntens <= 49){
                comissao = (15 * valorItems)/100;
                printf("valor de comissao: R$ %0.2f\n",comissao);

                mediaItens += qtdIntens / qtdPedidos;         
            }
            else if(qtdIntens <= 74){
                comissao = (20 * valorItems)/100;
                printf("valor de comissao: R$ %0.2f\n",comissao);

                mediaItens += qtdIntens / qtdPedidos;
            }
            else{
                comissao = (25 * valorItems)/100;
                printf("valor de comissao: R$ %0.2f\n",comissao);

                mediaItens += qtdIntens / qtdPedidos;
            }
            somaComissao = somaComissao + comissao;
        
   }
   cont = (cont/qtdPedidos)*100;

   printf("\nComissao total a receber: R$ %0.2f \n", somaComissao);
   printf("Media de itens vendidos: %0.0f \n", mediaItens);
   printf("Porcentagem de pedidos com menos de 20 itens : %0.2f%%",cont);

    return 0;
}

