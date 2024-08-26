// Código gerado pelo ChatGPT

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da pilha
typedef struct {
    int topo;       // Índice do topo da pilha
    int capacidade; // Capacidade da pilha
    int *array;     // Array para armazenar elementos da pilha
} Pilha;

// Função para criar uma pilha com capacidade dada
Pilha* criarPilha(int capacidade) {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;  // Inicialmente, a pilha está vazia
    pilha->array = (int*) malloc(pilha->capacidade * sizeof(int));
    return pilha;
}

// Função para verificar se a pilha está cheia
int estaCheia(Pilha* pilha) {
    return pilha->topo == pilha->capacidade - 1;
}

// Função para verificar se a pilha está vazia
int estaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

// Função para inserir um elemento na pilha (Push)
void push(Pilha* pilha, int item) {
    if (estaCheia(pilha)) {
        printf("Pilha cheia. Não é possível inserir o elemento %d.\n", item);
        return;
    }
    pilha->array[++pilha->topo] = item;
    printf("%d foi inserido na pilha.\n", item);
}

// Função para remover um elemento da pilha (Pop)
int pop(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Pilha vazia. Não é possível remover elemento.\n");
        return -1; // Indicador de erro
    }
    return pilha->array[pilha->topo--];
}

// Função para observar o elemento no topo da pilha (Peek/Top)
int peek(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Pilha vazia. Nenhum elemento no topo.\n");
        return -1; // Indicador de erro
    }
    return pilha->array[pilha->topo];
}

// Função principal para demonstrar o uso da pilha
int main() {
    // Criando uma pilha com capacidade para 5 elementos
    Pilha* pilha = criarPilha(5);
    
    // Realizando algumas operações na pilha
    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);
    push(pilha, 40);
    
    printf("Elemento no topo da pilha: %d\n", peek(pilha));
    
    printf("%d foi removido da pilha.\n", pop(pilha));
    printf("Elemento no topo da pilha: %d\n", peek(pilha));
    
    push(pilha, 50);
    push(pilha, 60);
    push(pilha, 70); // Este push tentará inserir em uma pilha cheia
    
    // Removendo todos os elementos da pilha
    while (!estaVazia(pilha)) {
        printf("%d foi removido da pilha.\n", pop(pilha));
    }
    
    // Tentativa de remover de uma pilha vazia
    pop(pilha);

    // Liberando a memória alocada para a pilha
    free(pilha->array);
    free(pilha);

    return 0;
}
