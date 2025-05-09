
#include <stdio.h>

// --------------------------------------------
// Função recursiva para mover a Torre
// --------------------------------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Passo %d: Direita\n", 6 - casas);
    moverTorre(casas - 1);
}

// --------------------------------------------
// Função recursiva para mover a Rainha
// --------------------------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Passo %d: Esquerda\n", 9 - casas);
    moverRainha(casas - 1);
}

// --------------------------------------------
// Função recursiva para o Bispo com loops aninhados
// --------------------------------------------
void moverBispo(int linha, int coluna, int max) {
    if (linha > max) return;

    for (int j = coluna; j <= linha; j++) {
        printf("Passo %d,%d: Cima, Direita\n", linha, j);
    }

    moverBispo(linha + 1, coluna + 1, max);
}

// --------------------------------------------
// Movimento complexo do Cavalo com loops aninhados
// Duas casas para cima e uma para a direita (em "L")
// --------------------------------------------
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    int i, j;
    for (i = 1; i <= 2; i++) {
        if (i == 2) break; // Cavalo só pode subir duas casas
        printf("Passo %d: Cima\n", i);
    }

    for (j = 1; j <= 1; j++) {
        if (j != 1) continue;
        printf("Passo 3: Direita\n");
    }
}

int main() {
    // -------------------------------
    // TORRE (recursiva)
    // -------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);
    printf("\n");

    // -------------------------------
    // BISPO (recursiva + loops aninhados)
    // -------------------------------
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(1, 1, 5);
    printf("\n");

    // -------------------------------
    // RAINHA (recursiva)
    // -------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);
    printf("\n");

    // -------------------------------
    // CAVALO (loops complexos)
    // -------------------------------
    moverCavalo();

    return 0;
}
