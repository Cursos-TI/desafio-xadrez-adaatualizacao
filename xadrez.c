#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
    // Simulando movimento da TORRE com estrutura for
    int movimentoTorre = 5;
    
    printf("Movimento da Torre (5 casas para a Direita):\n");
    
    for (int i = 0; i < movimentoTorre; i++) 
    {
        printf("Direita\n");
    }

    // Simulando movimento do BISPO com estrutura while
    int movimentoBispo = 0;
    
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    
    while (movimentoBispo < 5) 
    {
        printf("Cima Direita\n");
        movimentoBispo++;
    }

    // Simulando movimento da RAINHA com estrutura do-while
    int movimentoRainha = 0;
    
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    
    do
    {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < 8);


    // Movimento do CAVALO com loops aninhados
    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda - formato L):\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo com for para casas para baixo
    for (int i = 0; i < casasBaixo; i++) 
    {
        printf("Baixo\n");

        // Loop interno com while (executado apenas no último movimento vertical)
        if (i == casasBaixo - 1) 
        {
            int j = 0;
            while (j < casasEsquerda) 
            {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
