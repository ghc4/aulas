// Código gerado pelo ChatGPT

#include <stdio.h>

int main() {
    // Declaração de um array bidimensional 3x3
    int matriz[3][3];

    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Digite os valores para preencher a matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("\nMatriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }

    return 0;
}
