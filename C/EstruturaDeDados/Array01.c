// Código gerado pelo ChatGPT

#include <stdio.h>

int main() {
    // Definindo o tamanho do array
    int tamanho = 5;
    int numeros[tamanho]; // Declarando o array

    // Variáveis para armazenar a soma e a média
    int soma = 0;
    float media;

    // Preenchendo o array com números inteiros
    printf("Digite %d numeros inteiros:\n", tamanho);
    for(int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; // Calculando a soma
    }

    // Calculando a média
    media = (float)soma / tamanho;

    // Exibindo os números do array
    printf("\nNumeros digitados:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    // Exibindo a soma e a média
    printf("\n\nSoma dos numeros: %d", soma);
    printf("\nMedia dos numeros: %.2f\n", media);

    return 0;
}
