#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarCavaloSimples(int posicaoX, int posicaoY)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            posicaoY++;
            printf("Cima\n");
        }

        posicaoX++;
        printf("Direita\n");
    }
}

void movimentarCavaloAvancado(int posicaoX, int posicaoY)
{
    for (int i = 0; i < 2; i++)
    {
        posicaoY++;
        printf("Cima\n");

        if (i < 1)
            continue; // Só continua subindo até completar 2 casas

        for (int j = 0; j < 1; j++)
        {
            posicaoX++;
            printf("Direita\n");
        }

        break; // Sai após o movimento completo em L
    }
}

void movimentarCavalo()
{
    int posicaoX = 2; // B
    int posicaoY = 1; // 2
    
    printf("\nmovimentarCavaloSimples\n");
    movimentarCavaloSimples(posicaoX, posicaoY);
    
    printf("\nmovimentarCavaloAvancado\n");
    movimentarCavaloAvancado(posicaoX, posicaoY);
}

void movimentarBispoSimples(int posicaoX, int posicaoY, int numeroCasas)
{
    for (int i = 1; i <= numeroCasas; i++)
    {
        printf("Cima\n");
        posicaoY++;
        printf("Direita\n");
        posicaoX++;
    }
}
void movimentarBispoRecursao(int posicaoX, int posicaoY, int i, int numeroCasas)
{
    if (i <= numeroCasas)
    {
        posicaoY++;
        printf("Cima\n");
        posicaoX++;
        printf("Direita\n");
        movimentarBispoRecursao(posicaoX + 1, posicaoY, i + 1, numeroCasas);
    }
}
void movimentarBispo()
{
    int posicaoX = 3;
    int posicaoY = 1;
    int numeroCasas = 5;

    printf("\nmovimentarBispoRecursao\n");
    movimentarBispoRecursao(posicaoX, posicaoY, 1, numeroCasas);
    printf("\nmovimentarBispoSimples\n");
    movimentarBispoSimples(posicaoX, posicaoY, numeroCasas);

}

void movimentarTorreSimples(int posicaoX, int i, int numeroCasas)
{
    for (i; i <= numeroCasas; i++)
    {
        posicaoX++;
        printf("Direita\n");
    }
}
void movimentarTorreRecursao(int posicaoX, int i, int numeroCasas)
{
    if (i <= numeroCasas)
    {
        posicaoX++;
        i++;
        printf("Direita\n");
        movimentarTorreRecursao(posicaoX, i, numeroCasas);
    }
}
void movimentarTorre()
{
    int posicaoX = 1;
    int posicaoY = 1;
    int i = 1;
    int numeroCasas = 2;

    printf("\nmovimentarTorreSimples\n");
    movimentarTorreSimples(posicaoX, i, numeroCasas);
    printf("\nmovimentarRainhaRecursao\n");
    movimentarTorreRecursao(posicaoX, i, numeroCasas);
}

void movimentarRainhaSimples(int posicaoX, int i, int numeroCasas)
{
    for (i; i <= numeroCasas; i++)
    {
        posicaoX--;
        printf("Esquerda\n");
    }
};
void movimentarRainhaRecursao(int posicaoX, int i, int numeroCasas)
{
    if (i <= numeroCasas)
    {
        posicaoX--;
        i++;
        printf("Esquerda\n");
        movimentarRainhaRecursao(posicaoX, i, numeroCasas);
    }
}
void movimentarRainha()
{
    int posicaoX = 4;
    int posicaoY = 1;
    int contador = 1;
    int numeroCasas = 2;

    printf("\nmovimentarRainhaSimples\n");
    movimentarRainhaSimples(posicaoX, contador, numeroCasas);
    printf("\nmovimentarRainhaRecursao\n");
    movimentarRainhaRecursao(posicaoX, contador, numeroCasas);
}

int main()
{
    printf("\n============== Cavalo =============\n");
    movimentarCavalo();
    printf("\n============== Bispo =============\n");
    movimentarBispo();
    printf("\n============== Torre ============\n");
    movimentarTorre();
    printf("\n============== Rainha ============\n");
    movimentarRainha();
}
