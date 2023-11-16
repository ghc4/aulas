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



//Grupo IV - Explorando o uso de funções
//1. Fazer uma função que cacula a enésima potência de uma variável real x:
//f(x, n) = x 

#include <stdio.h>
int f(int x, int n) {
    int r = 1;
    for(int i=0; i<n; i++) {
        r *= x;
    }
    return r;
}
int main() {
    printf("%d", f(3,3));
    return 0;
}


//Grupo IV - Explorando o uso de funções
//2. Fazer uma função que calcula o fatorial de um número. Implementar uma
//versão recursiva e uma versão com laço.

#include <stdio.h>
int fat(int x) {
    if (x==1) return 1;
    return x * fat(x-1);
}
int main() {
    printf("%d", fat(4));
    return 0;
}


//Grupo IV - Explorando o uso de funções
//3. Dado que podemos calcular ex por:
//e^x = 1 + x + x^2/2! + x^3/3! + .
//Fazer um trecho de programa em "C" que lê um valor para x e calcula o valor de
//e^x. O valor deve ser calculado enquanto o termo calculado for maior que 10E-6

#include <stdio.h>
#include <math.h>
double fat(double x) {
    if (x==1) return 1;
    return x * fat(x-1);
}
int main() {
    double x = 5;
    double n = 1;
    double ex = 1 + x;
    double termo;
    do {
        termo = pow(x, ++n) / fat(n);
        ex += termo;
    } while(termo>0.00001 || n<20);
    printf("%lf %lf", termo, ex);
    return 0;
}


//4. Exercício: fazer um programa em "C" que solicita o total gasto pelo cliente de
//uma loja, imprime as opções de pagamento, solicita a opção desejada e
//imprime o valor total das prestações (se houverem).
//1) Opção: a vista com 10% de desconto
//2) Opção: em duas vezes (preço da etiqueta)
//3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
//acima de R$ 100,00).
//OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna
//a opção escolhida. No programa principal, testar a opção escolhida e ativar a
//função correspondente (uma função para cada opção)

#include <stdio.h>
int opcoes() {
    int opcao;
    printf("\n1) a vista com 10%% de desconto");
    printf("\n2) em duas vezes (preço da etiqueta)");
    printf("\n3) de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)");
    printf("\nEscolha a opção: "); scanf("%d", &opcao);
    return opcao;
}
int opcao1(int valor) {
    printf("\nValor final: %.02lf", ((double)valor*0.9));
}
int opcao2(int valor) {
    printf("\nValor final: 2x de %.02lf", ((double)valor/2));
}
int opcao3(int valor) {
    if(valor<100) {
        printf("\nValor deve ser >= 100");
        return 0;
    }
    for(int i=3; i<=10; i++) {
        printf("\nValor final: %i x de %.02lf", i, ((((double)valor)/(double)i)*1.03));
    }
}
int main() {
    int valor;
    printf("\nValor gasto: "); scanf("%d", &valor);
    int opcao = opcoes();
    opcao == 1 && opcao1(valor);
    opcao == 2 && opcao2(valor);
    opcao == 3 && opcao3(valor);
    return 0;
}

//Grupo V - Ponteiros
//1. Procure determinar quais valores são impressos ao final deste programa.
//Confira sua resposta testando o programa no micro. Execute-o passo a passo
//conferindo o valor das variáveis em cada momento.

#include <stdio.h>
int main() {
    int a,b,*c,*d,*f;
    a = 4;       // a = 4 = 2
    b = 3;       // b = 3
    c = &a;      // c->a
    d = &b;      // d->b
    *c /= 2;     // c->a /= 2
    f = c;       // f->a = 2
    c = d;       // c->b = 3
    d = f;       // d->a = 2
    printf("%d %d",*c,*d);
}


//Grupo VI - Vetores
//1. Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor
//valores lidos.

#include <stdio.h>
int main() {
    int x[10];
    int mai=0;
    int men=65535;
    for(int i=0; i<10; i++) {
        printf("\nValor %d: ", i); scanf("%d", &x[i]);
        x[i]>mai && (mai=x[i]);
        x[i]<men && (men=x[i]);
        printf("\nX=%d MAI=%d MEN=%d", i, mai, men);
    }
    return 0;
}



//Grupo VI - Vetores
//2. Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados

#include <stdio.h>
int main() {
    int x[10];
    int y[10];
    for(int i=0; i<10; i++) {
        printf("Valor %d: ", i); scanf("%d", &x[i]);
    }
    for(int i=0; i<10; i++) {
        int men = 65535;
        int idx = 0;
        for(int j=0; j<10; j++) {
            if(x[j] < men) {
                men = x[j];
                idx = j;
            };
        }
        y[i] = men;
        x[idx] = 65535;
    }
    for(int i=0; i<10; i++) {
        printf("\n %d", y[i]);
    }
    return 0;
}


//Grupo VI - Vetores
//3. Fazer uma rotina que recebe como parâmetro um array de 5 posições contendo
//as notas de um aluno ao longo do ano e devolve a média do aluno
#include <stdio.h>
int media(int arr[5]) {
    int s = 0;
    for(int i=0; i<5; i++) s+=arr[i];
    return s/5;
}
int main() {
    int x[5] = {50,70,80,50,80};
    printf("\n %d", media(x));
    return 0;
}


//Grupo VII - Strings
//1. Fazer um programa em "C" que lê um string qualquer de no máximo 80
//caracteres e imprime:
//- Quantos caracteres tem o string;
//- Quantos caracteres são de pontuação;
//- Quantos caracteres são números;
//- Quantos caracteres são minúsculas.
#include <stdio.h>
int main() {
    char x[80];
    int nchars = 0;
    int nponts = 0;
    int nnums = 0;
    int nmins = 0;
    printf("\nString: "); scanf("%s", x);
    for(int i=0; i<80; i++) {
        char c = x[i];
        if(c!=0) {
            printf("%c", c);
            nchars++;
            if(c>=33 && c<=47) nponts++;
            if(c>=48 && c<=57) nnums++;
            if(c>=96 && c<=122) nmins++;
        } else {
            break;
        }
    }
    printf("\nnchars %i", nchars);
    printf("\nnponts %i", nponts);
    printf("\nnnums  %i", nnums);
    printf("\nnmins  %i", nmins);
    return 0;
}



https://www.programiz.com/c-programming/c-structures
