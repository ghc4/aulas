// Código gerado pelo ChatGPT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct para representar um aluno
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    int numAlunos;
    Aluno *alunos;  // Ponteiro para armazenar a lista de alunos
    
    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);
    
    // Alocando memória dinamicamente para 'numAlunos' alunos
    alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));
    
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    
    // Recebendo os dados dos alunos
    for (int i = 0; i < numAlunos; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);  // Lê uma string com espaços
        
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
    
    // Exibindo os dados dos alunos
    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("---------------------\n");
    }
    
    // Liberando a memória alocada
    free(alunos);
    
    return 0;
}
