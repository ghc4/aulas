// Código gerado pelo ChatGPT

#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da lista duplamente encadeada
typedef struct No {
    int dado;
    struct No* prox;
    struct No* ant;
} No;

// Função para criar um novo nó
No* criarNo(int dado) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

// Função para inserir um nó no início da lista
void inserirInicio(No** cabeca, int dado) {
    No* novo = criarNo(dado);
    if (*cabeca == NULL) {
        *cabeca = novo;
    } else {
        novo->prox = *cabeca;
        (*cabeca)->ant = novo;
        *cabeca = novo;
    }
}

// Função para inserir um nó no final da lista
void inserirFim(No** cabeca, int dado) {
    No* novo = criarNo(dado);
    if (*cabeca == NULL) {
        *cabeca = novo;
    } else {
        No* temp = *cabeca;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->ant = temp;
    }
}

// Função para exibir a lista na ordem normal
void exibirLista(No* cabeca) {
    No* temp = cabeca;
    printf("Lista na ordem normal: ");
    while (temp != NULL) {
        printf("%d ", temp->dado);
        temp = temp->prox;
    }
    printf("\n");
}

// Função para exibir a lista na ordem inversa
void exibirListaInversa(No* cabeca) {
    No* temp = cabeca;
    if (temp == NULL) return;
    
    // Ir para o último nó
    while (temp->prox != NULL) {
        temp = temp->prox;
    }
    
    printf("Lista na ordem inversa: ");
    while (temp != NULL) {
        printf("%d ", temp->dado);
        temp = temp->ant;
    }
    printf("\n");
}

// Função para remover um nó do início da lista
void removerInicio(No** cabeca) {
    if (*cabeca == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    No* temp = *cabeca;
    *cabeca = (*cabeca)->prox;
    if (*cabeca != NULL) {
        (*cabeca)->ant = NULL;
    }
    free(temp);
    printf("Nó removido do início.\n");
}

// Função para remover um nó do final da lista
void removerFim(No** cabeca) {
    if (*cabeca == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    No* temp = *cabeca;
    if (temp->prox == NULL) { // Somente um nó na lista
        *cabeca = NULL;
    } else {
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->ant->prox = NULL;
    }
    free(temp);
    printf("Nó removido do final.\n");
}

// Função para inserir um nó em uma posição específica
void inserirPosicao(No** cabeca, int dado, int posicao) {
    No* novo = criarNo(dado);
    
    if (posicao == 0) {
        inserirInicio(cabeca, dado);
        return;
    }
    
    No* temp = *cabeca;
    for (int i = 0; temp != NULL && i < posicao - 1; i++) {
        temp = temp->prox;
    }
    
    // Verifica se a posição é válida
    if (temp == NULL) {
        printf("Posição inválida.\n");
        free(novo);
        return;
    }
    
    novo->prox = temp->prox;
    novo->ant = temp;
    
    if (temp->prox != NULL) {
        temp->prox->ant = novo;
    }
    temp->prox = novo;
    
    printf("Nó inserido na posição %d.\n", posicao);
}

// Função para remover um nó de uma posição específica
void removerPosicao(No** cabeca, int posicao) {
    if (*cabeca == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    
    No* temp = *cabeca;
    
    // Se a posição for 0, remova o primeiro nó
    if (posicao == 0) {
        *cabeca = temp->prox;
        if (*cabeca != NULL) {
            (*cabeca)->ant = NULL;
        }
        free(temp);
        printf("Nó removido da posição %d.\n", posicao);
        return;
    }
    
    // Percorre até o nó da posição
    for (int i = 0; temp != NULL && i < posicao; i++) {
        temp = temp->prox;
    }
    
    // Verifica se a posição é válida
    if (temp == NULL) {
        printf("Posição inválida.\n");
        return;
    }
    
    // Ajusta os ponteiros
    if (temp->prox != NULL) {
        temp->prox->ant = temp->ant;
    }
    if (temp->ant != NULL) {
        temp->ant->prox = temp->prox;
    }
    
    free(temp);
    printf("Nó removido da posição %d.\n", posicao);
}

// Função principal para demonstrar o uso da lista duplamente encadeada
int main() {
    No* cabeca = NULL;
    
    inserirInicio(&cabeca, 10);
    inserirInicio(&cabeca, 20);
    inserirFim(&cabeca, 30);
    inserirFim(&cabeca, 40);
    
    exibirLista(cabeca);
    
    inserirPosicao(&cabeca, 25, 2); // Inserir 25 na posição 2
    exibirLista(cabeca);
    
    removerPosicao(&cabeca, 3); // Remover nó na posição 3
    exibirLista(cabeca);
    
    return 0;
}
