#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarCavalo()
{
    int posicaoX = 2; // B
    int posicaoY = 1; // 2

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            posicaoY++;
            printf("Cima\n");
        }

        posicaoX++;
        printf("Direita\n");
    }

    printf("Posição do cavalo: %d, %d\n", posicaoX, posicaoY);
}

void movimentarCavaloAvancado()
{

}

void movimentarBispo()
{
    int posicaoX = 3;
    int posicaoY = 1;

    for (int i = 0; i < 1; i++)
    {
        posicaoX++;
        printf("Cima\n");

        for (int j = 0; j < 1; j++)
        {
            posicaoY++;
            printf("Direita\n");
        }
    }
}

void movimentarBispoRecursao()
{
    
}

void movimentarTorre()
{
    int posicaoX = 1;
    int posicaoY = 1;
    int i = 1;
    int numeroCasas = 2;

    movimentarTorreSimples(posicaoX, i, numeroCasas); 
    movimentarTorreRecursao(posicaoX, i, numeroCasas);
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
    if(i <= numeroCasas)
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
    
    printf("movimentarRainhaSimples\n");
    movimentarRainhaSimples(posicaoX, contador, numeroCasas); 
    printf("movimentarRainhaRecursao\n");
    movimentarRainhaRecursao(posicaoX, contador, numeroCasas);   
}

int main()
{
    // movimentarCavalo();
    // movimentarCavaloAvancado();
    // movimentarBispo();
    // movimentarBispoRecursao();
    // movimentarTorre();
    // movimentarTorreRecursao();
    movimentarRainha();
}
