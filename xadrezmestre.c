#include <stdio.h>
//mover a torre 
void moverTorre (int casas){ 
    if (casas > 0) {
        printf("Direita\n");
        moverTorre (casas - 1);
    }
}
//mover bispo
void moverBispo (int casas){
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

//mover rainha
void moverrainha (int casas){
    if (casas > 0) {
        printf("Baixo\n");
        moverrainha(casas - 1);
    }
}


int main(){
int peca;
int movimento = 1;
int i = 1;

//entrando com as instruções para o jogo
 printf("-------Vamos jogar Xadrez!!! Vença o melhor!!!-------\n");
 printf("1.Mover peça 'Torre'\n");
 printf("2.Mover peça 'Bispo'\n");
 printf("3.Mover peça 'Rainha'\n");
 printf("4.Mover peça 'Cavalo'\n");
 printf("5.Mover peça 'Bispo' com loops alinhados\n");
 printf("Esolha uma peça: "); /*solicitando a peça para jogar*/
 scanf("%d", &peca); /*escolhendo a peça */

//fazendo as peças se movimentarem

   switch (peca)
   {
         //mover a torre
         case 1:
        printf("Você escolheu a Torre\n"); 
        //mover a torre cindo casas para a direita
        moverTorre(5);
        break;
        
        //mover o bispo
         case 2:
         printf("Você escolheu o Bispo\n"); 
        //mover o Bispo e cinco casas para cima e direita
        moverBispo(5);
         break;
      
         //mover a rainha
         case 3:
         printf("Você escolheu a Rainha\n"); 
         //mover a rainha oito casas para baixo
         moverrainha(8);
         break;

         //mover cavalo
         case 4:
         printf("Você escolheu o Cavalo\n"); 
         //mover o cavalo duas vezes para cima e uma vez para a direita
         
            for (int i = 0, j = 4; i < j; i++, j--)
            {
                printf("Cima\n"); /*imprima cima duas vezes*/
            }
            printf("Direita\n"); /*imprima direita uma vez*/
        break;

        //mover bispo com loops alinhados
        case 5:
        printf("Você escolheu o Bispo\n");
        for (int i = 1; i <=5; i++) //loop externo
        {
            for (int j = 1; j <2; j++)/*loop interno*/
            {
            printf("Cima, Direita\n"); 
            }         
        }printf("\n");
       }
 
  
return 0;
}