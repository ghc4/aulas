#include <stdio.h>
#include <string.h>
int main() {
    char normal[20], tamanho=0, caractere=0;
    printf("Digite uma string (pressione Enter para finalizar): ");
    while (tamanho<19 && caractere!='\n') normal[tamanho++] = caractere = getchar();
    tamanho--;
    for(int i=0; i<tamanho/2; i++) {   // sera que esta certo?
        char charfim = normal[tamanho-i];
        char charini = normal[i];
        normal[tamanho-i] = charini;
        normal[i] = charfim;
    }
    normal[tamanho+1] = '\0';
    printf("\nString invertida: %s\n", normal);
    return 0;
}
