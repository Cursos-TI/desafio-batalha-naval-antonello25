#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[LINHAS][COLUNAS];

    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };

    int cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    int octaedro[3][3] = {
        {0,1,0},
        {1,1,1},
        {0,1,0}
    };


    for(int i = 0; i < LINHAS; i++){ 
        for(int j = 0; j < COLUNAS; j++){                   //Impressão da matriz
            if((i == 4) && (j > 0 && j < 4)){
                tabuleiro[i][j] = navio1[j - 1];
            }else if((i >= 2 && i <= 4) && (j == 6)){
                tabuleiro[i][j] = 3;
            }else if((i >= 1 && i <= 3) && (i == j)){
                tabuleiro[i][j] = 3;
            }else if((i >= 7 && i <= LINHAS) && (i + j == LINHAS)){
                tabuleiro[i][j] = 3;
            }else{
                tabuleiro[i][j] = 0;
            }
        }
   }

   for(int i = 0; i < 10; i++){       //Linha de A-G
    if(i == 0){
        printf("   %c", linha[i]);
    } else{
        printf(" %c", linha[i]);
    }
}
    printf("\n");
   for(int i = 0; i < LINHAS; i++){
    if(i == 9){                       //Coluna de 1-10
        printf("%d ", coluna[i]);
    } else{
        printf(" %d ", coluna[i]);    //Coluna de 1-10
    }

    for(int j = 0; j < COLUNAS; j++){
        if((i >= 0 && i <= 2) && (j >= 2 && j <= 6)){
            tabuleiro[i][j] = cone[i][j - 2];
            printf("%d ", tabuleiro[i][j]);
        }else if((i >= 7 && i <= 9) && (j >= 5 && j <=9)){
            tabuleiro[i][j] = cruz[i-7][j-5];
            printf("%d ", tabuleiro[i][j]);
        }else if((i >= 6 && i <= 8) && (j >= 1 && j <= 3)){
            tabuleiro[i][j] = octaedro[i-6][j-1];
            printf("%d ", tabuleiro[i][j]);
        }else{
            printf("%d ", tabuleiro[i][j]);
        }
    }
    printf("\n");
   }
}
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

   

