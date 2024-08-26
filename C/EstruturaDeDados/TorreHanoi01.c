// Código gerado pelo ChatGPT

#include <stdio.h>

// Função recursiva para resolver a Torre de Hanoi
void torreHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        // Caso base: mover um único disco diretamente
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    // Mover n-1 discos da origem para o auxiliar, usando o destino como auxiliar
    torreHanoi(n - 1, origem, auxiliar, destino);
    // Mover o disco restante da origem para o destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    // Mover os n-1 discos do auxiliar para o destino, usando a origem como auxiliar
    torreHanoi(n - 1, auxiliar, destino, origem);
}

// Função principal
int main() {
    int n;  // Número de discos
    printf("Digite o número de discos: ");
    scanf("%d", &n);

    // Verifica se o número de discos é positivo
    if (n <= 0) {
        printf("O número de discos deve ser um inteiro positivo.\n");
        return 1;
    }

    // Chama a função para resolver o problema da Torre de Hanoi
    printf("Solução para %d discos:\n", n);
    torreHanoi(n, 'A', 'C', 'B'); // A: haste de origem, C: haste de destino, B: haste auxiliar

    return 0;
}
