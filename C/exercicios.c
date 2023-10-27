// http://www.telecom.uff.br/~marcos/protocolos/www.cic.unb.br/docentes/jacobi/Extensao/ListaExerc.pdf


// 1. Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>
int main() {
    double metros;
    printf("\nDigite um valor em metros: ");
    scanf("%lf", &metros);
    printf("\nDecimetros..: %10.2lf", metros*10);
    printf("\nCentimetros.: %10.2lf", metros*100);
    printf("\nMilimetros..: %10.2lf", metros*1000);
    return 0;
}


// 2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

// 2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
#include <stdio.h>
int main() {
    for(int i=1; i<10; i++) {
        for(int j=1; j<10; j++) {
            printf("%3d ", i*j);
        }
        printf("\n");
    }
    return 0;
}

// 3. Fazer um programa que solicita um número decimal e imprime o
// correspondente em hexa e octal.

// 3. Fazer um programa que solicita um número inteiro e imprime o
// correspondente em hexa e octal.
#include <stdio.h>
int main() {
    int numero;
    printf("\nDigite um valor inteiro: ");
    scanf("%i", &numero);
    printf("\nHexa.....: %x", numero);
    printf("\nOctal....: %o", numero);
    return 0;
}




// 4. Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
// imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
// seguem.
// a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
//     C=(f-32.0) * (5.0/9.0).
// b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
//     C=(f-32)*(5/9).

#include <stdio.h>
int main() {
    double f, C;
    printf("\nDigite um Fahrenheit: ");
    scanf("%lf", &f);
    C=(f-32.0) * (5.0/9.0);
    printf("\nCelcius.....: %lf", C);
    return 0;
}


#include <stdio.h>
int main() {
    int f, C;
    printf("\nDigite um Fahrenheit: ");
    scanf("%i", &f);
    C=(int)(((float)f-32.0) * (5.0/9.0));
    printf("\nCelcius.....: %i", C);
    return 0;
}



// 5. Fazer um programa em "C" que solicite 2 números e informe:
//  a) A soma dos números;
//  b) O produto do primeiro número pelo quadrado do segundo;
//  c) O quadrado do primeiro número;
//  d) A raiz quadrada da soma dos quadrados;
//  e) O seno da diferença do primeiro número pelo segundo;
//  f) O módulo do primeiro número.

#include <stdio.h>
#include <math.h>
int main() {
  double n1, n2;
  printf("\nDigite um valor: ");
  scanf("%lf", &n1);
  printf("\nDigite outro valor: ");
  scanf("%lf", &n2);
  printf("\nA soma: %lf", (n1+n2));
  printf("\nProduto: %lf", (n1*(n2*n2)));
  printf("\nQuadrado: %lf", (n1*n1));
  printf("\nRaiz da soma: %lf", (sqrt((n1*n1)+(n2*n2))));
  printf("\nSeno da dif: %lf", (sin((n1-n2)*(3.1415/180))));
  printf("\nModulo: %i", abs((int)n1));
  return 0;
}


// 1. Faça um programa em "C" que lê dois valores e imprime:
//  - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até
// o segundo;
//  - se o primeiro valor for menor que o segundo a lista de valores do segundo até
// o primeiro em ordem decrescente;
//  - se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>
#include <math.h>
int main() {
  int n1, n2;
  printf("\nDigite um valor: ");
  scanf("%i", &n1);
  printf("\nDigite outro valor: ");
  scanf("%i", &n2);
  for(int i=n1; i<n2; i++) {
      printf("%i ", i);
  }
  for(int i=n1; i<n2; i++) {
      printf("%i ", n2+1-i);
  }
  n1 == n2 && printf("\nSao iguais");
  printf("\nfim");
  return 0;
}

// Fazer um programa que imprime a tabela ASCII (código decimal, código hexa,
// caracter) para os códigos de 0 a 127.

#include <stdio.h>
#include <math.h>
int main() {
  for(char i=0; i<127; i++) {
      printf("\n%i  %x  %c ", i, i, i);
  }
  printf("\nfim");
  return 0;
}

// Fazer um programa em "C" que lê o preço de um produto e inflaciona esse
// preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a
// 100.
// OBS: não use o comando "if" ou o operador de condição "?".

#include <stdio.h>
#include <math.h>
int main() {
  double preco;
  printf("\nDigite um preco: ");
  scanf("%lf", &preco);
  (preco < 100) ? (preco*=1.1) : (preco*=1.2);
  printf("%lf", preco);
  printf("\nfim");
  return 0;
}
