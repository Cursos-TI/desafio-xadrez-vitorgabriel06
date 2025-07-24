#include <stdio.h>

/*
 * Simulação de movimentos das peças de xadrez
 * Torre, Bispo, Rainha e Cavalo
 * Níveis: Novato, Aventureiro e Mestre
 *
 * Autor: Victor
 * Data: 2025
 */

// ----------- Nível Novato -----------

// Torre se move para a direita usando for
void torre_movimento_for(int casas) {
    printf("Movimento da Torre (for):\n");
    for (int i = 0; i < casas; i++) {
        printf("-> Direita\n");
    }
    printf("\n");
}

// Bispo se move na diagonal (cima e direita) usando while
void bispo_movimento_while(int casas) {
    printf("Movimento do Bispo (while):\n");
    int i = 0;
    while (i < casas) {
        printf("-> Cima, Direita\n");
        i++;
    }
    printf("\n");
}

// Rainha se move para a esquerda usando do-while
void rainha_movimento_do_while(int casas) {
    printf("Movimento da Rainha (do-while):\n");
    int i = 0;
    do {
        printf("-> Esquerda\n");
        i++;
    } while (i < casas);
    printf("\n");
}

// ----------- Nível Aventureiro -----------

// Cavalo se move em "L": 2 para baixo + 1 para a esquerda
void cavalo_movimento_aninhado() {
    const int casas_baixo = 2;
    const int casas_esquerda = 1;

    printf("Movimento do Cavalo (aninhado):\n");

    for (int i = 0; i < casas_baixo; i++) {
        printf("-> Baixo\n");
    }

    int j = 0;
    while (j < casas_esquerda) {
        printf("-> Esquerda\n");
        j++;
    }

    printf("\n");
}

// ----------- Nível Mestre -----------

// Torre com recursividade
void torre_recursiva(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("-> Direita\n");
    torre_recursiva(casas_restantes - 1);
}

// Bispo com recursividade
void bispo_recursivo(int vertical, int max) {
    if (vertical >= max) return;
    printf("-> Cima, Direita\n");
    bispo_recursivo(vertical + 1, max);
}

// Rainha com recursividade
void rainha_recursiva(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("-> Esquerda\n");
    rainha_recursiva(casas_restantes - 1);
}

// Cavalo: 2 para cima e 1 para a direita usando break e continue
void cavalo_loops_complexos() {
    const int casas_cima = 2;
    const int casas_direita = 1;

    printf("Movimento do Cavalo Mestre (loops complexos):\n");

    for (int i = 0; i < casas_cima; i++) {
        if (i == 100) continue; // Exemplo apenas
        printf("-> Cima\n");
    }

    int j = 0;
    while (1) {
        if (j >= casas_direita) break;
        printf("-> Direita\n");
        j++;
    }

    printf("\n");
}

// ----------- Função Principal -----------

int main() {
    // Nível Novato
    torre_movimento_for(5);
    bispo_movimento_while(5);
    rainha_movimento_do_while(8);

    // Nível Aventureiro
    cavalo_movimento_aninhado();

    // Nível Mestre
    printf("Movimento da Torre Recursiva:\n");
    torre_recursiva(5);
    printf("\n");

    printf("Movimento do Bispo Recursivo:\n");
    bispo_recursivo(0, 5);
    printf("\n");

    printf("Movimento da Rainha Recursiva:\n");
    rainha_recursiva(8);
    printf("\n");

    cavalo_loops_complexos();

    return 0;
}
