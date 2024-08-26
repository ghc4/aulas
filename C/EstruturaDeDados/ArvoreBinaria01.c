#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó da árvore binária
typedef struct No {
    int valor;
    struct No *esquerda, *direita;
} No;

// Função para criar um novo nó
No* novoNo(int valor) {
    No* no = (No*)malloc(sizeof(No));
    no->valor = valor;
    no->esquerda = no->direita = NULL;
    return no;
}

// Função para inserir um novo nó na árvore binária
No* inserir(No* raiz, int valor) {
    // Se a árvore estiver vazia, cria um novo nó e retorna
    if (raiz == NULL) return novoNo(valor);
    
    // Caso contrário, percorre a árvore
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);
    
    // Retorna o ponteiro (invariância da árvore)
    return raiz;
}

// Função para realizar a travessia em ordem (In-Order Traversal)
void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        emOrdem(raiz->direita);
    }
}

// Função para realizar a travessia em pré-ordem (Pre-Order Traversal)
void preOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

// Função para realizar a travessia em pós-ordem (Post-Order Traversal)
void posOrdem(No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

// Função para buscar um valor na árvore binária
No* buscar(No* raiz, int valor) {
    // Base da recursão: raiz é nula ou o valor está na raiz
    if (raiz == NULL || raiz->valor == valor)
        return raiz;

    // O valor é maior que a raiz, busca na subárvore direita
    if (valor > raiz->valor)
        return buscar(raiz->direita, valor);

    // O valor é menor que a raiz, busca na subárvore esquerda
    return buscar(raiz->esquerda, valor);
}

// Função principal
int main() {
    No* raiz = NULL;
    
    // Inserindo nós na árvore binária
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 20);
    inserir(raiz, 40);
    inserir(raiz, 70);
    inserir(raiz, 60);
    inserir(raiz, 80);
    
    printf("Travessia em ordem (In-Order): ");
    emOrdem(raiz);
    printf("\n");
    
    printf("Travessia em pré-ordem (Pre-Order): ");
    preOrdem(raiz);
    printf("\n");
    
    printf("Travessia em pós-ordem (Post-Order): ");
    posOrdem(raiz);
    printf("\n");
    
    // Buscando um valor na árvore
    int valorParaBuscar = 60;
    No* resultado = buscar(raiz, valorParaBuscar);
    if (resultado != NULL)
        printf("Valor %d encontrado na árvore.\n", valorParaBuscar);
    else
        printf("Valor %d não encontrado na árvore.\n", valorParaBuscar);
    
    return 0;
}
