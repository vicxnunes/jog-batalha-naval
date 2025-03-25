#include <stdio.h>

int main() {
    // ---------- ETAPA 1: NÍVEL NOVATO ----------
    
    // 1. Representação do Tabuleiro 10x10
    int tabuleiro[10][10];
    int i, j;

    // Inicializando o tabuleiro com 0 (representando água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionar dois navios com vetores unidimensionais
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Coordenadas iniciais definidas no código (sem input do usuário)
    int linhaH = 1, colunaH = 2; // navio horizontal
    int linhaV = 4, colunaV = 5; // navio vertical

    // Validação se o navio horizontal cabe no tabuleiro e não sobrepõe
    int podeColocarH = 1;
    if (colunaH + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                podeColocarH = 0;
                break;
            }
        }
        if (podeColocarH) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
            }
        }
    }

    // Validação se o navio vertical cabe e não sobrepõe
    int podeColocarV = 1;
    if (linhaV + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                podeColocarV = 0;
                break;
            }
        }
        if (podeColocarV) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
            }
        }
    }

    // ---------- ETAPA 2: NÍVEL AVENTUREIRO ----------

    // Posicionar dois navios em diagonal
    int navio_diag1[3] = {3, 3, 3};
    int navio_diag2[3] = {3, 3, 3};

    int linhaD1 = 0, colunaD1 = 0; // Diagonal principal
    int linhaD2 = 0, colunaD2 = 9; // Diagonal secundária

    // Verificação e colocação diagonal principal
    int podeColocarD1 = 1;
    if (linhaD1 + 3 <= 10 && colunaD1 + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaD1 + i][colunaD1 + i] != 0) {
                podeColocarD1 = 0;
                break;
            }
        }
        if (podeColocarD1) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaD1 + i][colunaD1 + i] = navio_diag1[i];
            }
        }
    }

    // Verificação e colocação diagonal secundária
    int podeColocarD2 = 1;
    if (linhaD2 + 3 <= 10 && colunaD2 - 2 >= 0) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0) {
                podeColocarD2 = 0;
                break;
            }
        }
        if (podeColocarD2) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaD2 + i][colunaD2 - i] = navio_diag2[i];
            }
        }
    }

    // ---------- ETAPA 3: NÍVEL MESTRE ----------

    // Matrizes das habilidades
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Pontos de origem no tabuleiro para aplicar cada habilidade
    int origemX, origemY;

    // Aplica habilidade Cone no centro (3,3)
    origemX = 3; origemY = 3;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int x = origemX - 2 + i;
            int y = origemY - 2 + j;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && cone[i][j] == 1) {
                if (tabuleiro[x][y] == 0) {
                    tabuleiro[x][y] = 5;
                }
            }
        }
    }

    // Aplica habilidade Cruz (6,2)
    origemX = 6; origemY = 2;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int x = origemX - 2 + i;
            int y = origemY - 2 + j;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && cruz[i][j] == 1) {
                if (tabuleiro[x][y] == 0) {
                    tabuleiro[x][y] = 5;
                }
            }
        }
    }

    // Aplica habilidade Octaedro (6,7)
    origemX = 6; origemY = 7;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int x = origemX - 2 + i;
            int y = origemY - 2 + j;
            if (x >= 0 && x < 10 && y >= 0 && y < 10 && octaedro[i][j] == 1) {
                if (tabuleiro[x][y] == 0) {
                    tabuleiro[x][y] = 5;
                }
            }
        }
    }

    // ---------- IMPRESSÃO FINAL DO TABULEIRO ----------
    printf("\nTABULEIRO FINAL - BATALHA NAVAL:\n\n");
    printf("Legenda: 0 = Água | 3 = Navio | 5 = Habilidade\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
