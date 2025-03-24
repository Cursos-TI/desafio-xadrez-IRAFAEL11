#include <stdio.h>

int main() {
    // Movimento da Torre usando estrutura for
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita - Casa %d\n", i);
    }

    // Movimento do Bispo usando estrutura while
    int movimentoBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita - Casa %d\n", contadorBispo);
        contadorBispo++;
    }

    // Movimento da Rainha usando estrutura do-while
    int movimentoRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda - Casa %d\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // Movimento do Cavalo usando loops aninhados
    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo - Casa %d\n", i); // Movimento para baixo
    }

    int contadorEsquerda = 1;
    while (contadorEsquerda <= movimentoEsquerda) {
        printf("Esquerda - Casa %d\n", contadorEsquerda); // Movimento para a esquerda
        contadorEsquerda++;
    }

    return 0;
}


