// Código gerado pelo ChatGPT

#include <stdio.h>
#include <stdlib.h>

// Definição do nó
struct Node {
    int data;
    struct Node* next;
};

// Função para adicionar um nó no início da lista
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

// Função para adicionar um nó no final da lista
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Função para remover o primeiro nó que contém o valor especificado
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // Se o nó a ser removido é o primeiro nó
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Procura o nó a ser removido
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Se o valor não foi encontrado na lista
    if (temp == NULL) return;

    // Remove o nó
    prev->next = temp->next;
    free(temp);
}

// Função para exibir a lista
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);

    printf("Lista encadeada: ");
    printList(head);

    deleteNode(&head, 2);
    printf("Lista encadeada após remover 2: ");
    printList(head);

    return 0;
}
