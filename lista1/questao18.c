#include <stdio.h>

int main() {
    int i, j;

    // ======== RETÂNGULO ========
    printf("RETANGULO:\n");
    int altura = 8, largura = 9;
    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // ======== ELIPSE ========
    printf("\nELIPSE:\n");
    int linhas = 9, colunas = 11;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            // fórmula aproximada para contorno da elipse
            if ((i == 0 && (j > 2 && j < 8)) ||
                (i == 1 && (j == 1 || j == 9)) ||
                (i == 2 && (j == 0 || j == 10)) ||
                (i == 6 && (j == 0 || j == 10)) ||
                (i == 7 && (j == 1 || j == 9)) ||
                (i == 8 && (j > 2 && j < 8)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // ======== SETA ========
    printf("\nSETA:\n");
    int alturaSeta = 7;
    for (i = 0; i < alturaSeta; i++) {
        for (j = 0; j < 9; j++) {
            if ((i == 0 && j == 4) ||
                (i == 1 && (j == 3 || j == 4)) ||
                (i == 2 && (j >= 2 && j <= 6)) ||
                (i == 3) ||
                (i == 4 && (j >= 2 && j <= 6)) ||
                (i == 5 && (j == 3 || j == 4)) ||
                (i == 6 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // ======== LOSANGO ========
    printf("\nLOSANGO:\n");
    int n = 4; // altura do topo
    for (i = 1; i <= n; i++) { // parte superior
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) { // parte inferior
        for (j = n; j > i; j--)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
