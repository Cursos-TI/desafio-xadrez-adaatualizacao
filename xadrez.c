#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função recursiva para a TORRE (Direita)
void moverTorre(int casasRestantes) 
{
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorre(casasRestantes - 1);
    }
}

// Função recursiva para a RAINHA (Esquerda)
void moverRainha(int casasRestantes) 
{
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        moverRainha(casasRestantes - 1);
    }
}

// Função recursiva para o BISPO (Cima Direita)
void moverBispoRecursivo(int casasRestantes) 
{
    if (casasRestantes > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casasRestantes - 1);
    }
}

// BISPO com loops aninhados (vertical externo, horizontal interno)
void moverBispoLoop(int movimentos) 
{
    printf("(Bispo com Loops Aninhados)\n");
    for (int i = 0; i < movimentos; i++)  // vertical (cima)
    {
        for (int j = 0; j < 1; j++)  // horizontal (direita)
        {
            printf("Cima Direita\n");
        }
    }
}

// Movimento do CAVALO com loops aninhados (duas casas para cima, uma para direita)
void moverCavalo() 
{
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita - formato L):\n");

    int movVertical = 2;
    int movHorizontal = 1;

    for (int i = 0; i < 3; i++) 
    {
        int v = 0, h = 0;

        while (v < movVertical || h < movHorizontal) 
        {
            if (v < movVertical) 
            {
                printf("Cima\n");
                v++;
                if (v == 1) continue; // Só pra mostrar uso de continue
            }

            if (h < movHorizontal) {
                printf("Direita\n");
                h++;
                break; // Mostra o uso de break após o movimento horizontal
            }
        }
        break; // Evita repetir o movimento várias vezes
    }
}


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

    
        // Movimento da Torre
    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorre(5);

    // Movimento do Bispo com recursão
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita - Recursivo):\n");
    moverBispoRecursivo(5);

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (5 casas na Diagonal para Cima Direita - Loops):\n");
    moverBispoLoop(5);

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainha(8);

    // Movimento do Cavalo com loops complexos
    printf("\n");
    moverCavalo();

    return 0;
}
