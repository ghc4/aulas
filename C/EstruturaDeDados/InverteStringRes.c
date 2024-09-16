#include <stdio.h>
#include <string.h>
int main() {
    char normal[20], invertida[20], tamanho=0, caractere=0, contador=0;
    printf("Digite uma string (pressione Enter para finalizar): ");
    while (tamanho<19 && caractere!='\n') normal[tamanho++] = caractere = getchar();
    normal[tamanho--] = '\0';
    while(tamanho>0) 
        invertida[contador++] = normal[--tamanho];
    invertida[contador] = '\0';
    printf("String invertida: %s\n", invertida);
    return 0;
}