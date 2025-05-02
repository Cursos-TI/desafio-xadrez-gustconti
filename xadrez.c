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
        print("Direita\n");
    }

    printf("Posição do cavalo: %d, %d\n", posicaoX, posicaoY);
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

void movimentarTorre()
{
    int posicaoX = 1;
    int posicaoY = 1;

    for (int i = 0; i < 1; i++)
    {
        posicaoX++;
        printf("Direita\n");

    }
}

void movimentarRainha()
{
    int posicaoX = 4;
    int posicaoY = 1;
    
    for (int i = 0; i < 1; i++)
    {
        posicaoX--;
        printf("Esquerda\n");
    }
}

int main()
{
    movimentarCavalo();
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}
