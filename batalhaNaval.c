#include <stdio.h>

int main(){
    const int TAM = 10;
    int tabuleiro [TAM] [TAM]; //matriz bidimensional
    int i, j;

    //inicializa tabuleiro com 0
    for(i = 0; i <TAM; i++){
        for (j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }

    //navio horizontal (linha2, colunas 3-5)

    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    //navio vertical (coluna 7, linhas 6-8)

    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    //imprime cabecalho de A a J na coluna
        printf("   ");

    for(j = 0; j < TAM; j++){
        printf("%c ", 'A' + j); // imprime coluna de A a J, no caso o + j é referente a coluna
    }
        printf("\n");

    //imprime tabuleiro com cabecalho de 1 a 10 na linha

        for(i = 0; i < TAM; i++){
        printf("%2d ", i + 1);
        for (j = 0; j < TAM; j++)
        {
        printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        }
        
        return 0;
    }

    