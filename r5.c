/*
Um programa que leia o tamanho do mapa, a posição inicial, a posição final
e movimente o jogador procurando uma saída. 
Catarian Lemos
24/03/2026
*/

#include <stdio.h>

#define TAM 20
#define MAX_CAM 4

typedef struct
{
    int linha, coluna;
} tPosicao;

tPosicao lePosicao ()
{
    tPosicao p;
    scanf("%d %d", &p.linha, &p.coluna);
    return p;
}

void leMatriz (int mapa[TAM][TAM], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }
}

int main ()
{
    int lin, col;
    scanf("%d %d", &lin, &col);

    int mapa[TAM][TAM];
    leMatriz(mapa, lin, col);

    tPosicao inicio, fim;
    inicio = lePosicao();
    fim = lePosicao();

    char caminho[5]; // letras + \0
    scanf("%s", caminho);

    int visitados[TAM][TAM];

    return 0;
}