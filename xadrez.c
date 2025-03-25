#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int movimentoTorre, int casaAtual) {
    if (casaAtual > movimentoTorre) return;
    printf("Direita - Casa %d\n", casaAtual);
    moverTorre(movimentoTorre, casaAtual + 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int movimentoBispo, int casaAtual) {
    if (casaAtual > movimentoBispo) return;
    printf("Cima, Direita - Casa %d\n", casaAtual);
    moverBispo(movimentoBispo, casaAtual + 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int movimentoRainha, int casaAtual) {
    if (casaAtual > movimentoRainha) return;
    printf("Esquerda - Casa %d\n", casaAtual);
    moverRainha(movimentoRainha, casaAtual + 1);
}

int main() {
    // Movimento da Torre
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre, 1);

    // Movimento do Bispo com loops aninhados
    int movimentoVerticalBispo = 3, movimentoHorizontalBispo = 3;
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 1; i <= movimentoVerticalBispo; i++) {
        for (int j = 1; j <= movimentoHorizontalBispo; j++) {
            printf("Cima, Direita - Casa (%d,%d)\n", i, j);
        }
    }

    // Movimento da Rainha
    int movimentoRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha, 1);

    // Movimento do Cavalo
    int movimentoCavaloVertical = 2, movimentoCavaloHorizontal = 1;
    printf("\nMovimento do Cavalo (em L):\n");
    for (int i = 1; i <= movimentoCavaloVertical; i++) {
        for (int j = 1; j <= movimentoCavaloHorizontal; j++) {
            printf("Cima - Casa %d\n", i * 2); // Movimento duas casas para cima
            if (j == 1) {
                printf("Direita - Casa %d\n", j); // Movimento uma casa para a direita
                break; // Controlando o fluxo do loop
            }
        }
    }

    return 0;
}
