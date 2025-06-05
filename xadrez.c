#include <stdio.h>
int main(){
int peca;
int i = 1;

//entrando com as instruções para o jogo
 printf("-------Vamos jogar Xadrez!!! Vença o melhor!!!-------:\n");
 printf("1.Mover peça 'Torre'\n");
 printf("2.Mover peça 'Bispo'\n");
 printf("3.Mover peça 'Rainha'\n");
 printf("Esolha uma peça: "); /*solicitando a peça para jogar*/
 scanf("%d", &peca); /*escolhendo a peça */

//fazendo as peças se movimentarem

   switch (peca)
   {
   //mover a torre
    case 1:
   printf("Você escolheu a Torre\n"); 
   //mover a torre cindo casas para a direita
   while (i <=5)
   {
    printf("Direita\n");
    i++;  /* code */
   }
   break;
    //mover o bispo
    case 2:
    printf("Você escolheu o Bispo\n"); 
   //mover o Bispo e cinco casas para cima e direita
  
    for ( i ; i <= 5; i++)
    {
    printf("Cima, Direita\n");
    }
   break;
   //mover a rainha
   case 3:
   printf("Você escolheu a Rainha\n"); 
   //mover a rainha oito casas para a esquerda
   do
   {
    printf("esquerda\n");
    i++;
   } while (i<=8);
   break;
   
   }
   
   
return 0;
}
