# include <stdio.h>

int main() {

    //Desafio Xadrez
    //Nìvel Novato
    
    //Declaração de variáveis
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;
    int i;



    //Menu para usuário escolher qual peça movimentar
    do
    {
        printf("\n\n");

        printf("Seja Bem-Vindo(a) ao jogo de Xadrez!\n");
        printf("Escolha quais peças deseja movimentar e digite o número que a representa :\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Sair do jogo\n");
        printf("Opção : ");
        scanf(" %d", &i);

        if(i == 1)
        {
            //Movimento do Bispo
            int x = 0;
            while (x < movimentoBispo)
            {
                printf("Cima Direita\n");
                x++;
            }
            
        } else if (i == 2) {

            //Movimento da Torre    
            int y = 0;
            do
            {
                printf("Direita\n");
                y++;

            } while (y < 5);
    
        } else if(i == 3) {
            //Movimento da Rainha
             for (int z = 0; z < 8; z++)
             {
                 printf("Esquerda\n");
             }   
                
        } else if(i == 4) {
            printf("Você saiu do jogo.");
        } else {
            printf("Opção inválida"); 
        }

    } while (i != 4);

    return 0;

}
