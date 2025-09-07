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

    //navio horizontal (linha2, colunas C,D,E)

    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    //navio vertical (coluna G, linhas 6,7,8)

    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    //navio diagonal (linhas 4,5,6. colunas C,D,E)

    for(int i = 0; i < 3; i++){
        tabuleiro[3 + i][2 + i] = 3; 
    }

    //navio diagonal secundario (linhas 1,2,3. colunas J,I,H)

    for (int i = 0; i < 3; i++){
        tabuleiro[0 + i][9 - i] = 3; // incrementa linhas de 1 até 3 e decrementa colunas do J até H
    }
    

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

    