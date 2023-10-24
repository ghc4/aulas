// vim: ts=4 sw=4 sts=4 et number : 
// chcp 65001; c++ 01_0_Completa.cpp && ./a.exe
// https://www.programiz.com/cpp-programming/list
// https://cplusplus.com/reference/list/list/
// https://cplusplus.com/reference/iterator/iterator/

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Clientes {
public:
    static int id;
    string nome;
    Clientes() {
        Clientes::id++;
        id = Clientes::id;
        nome = "";
    };
};
int Clientes::id = 0;


class Produtos {
public:
    static int id;
    int valor;
    string nome;
    Produtos() {
        Produtos::id++;
        id = Produtos::id;
        valor = 0;
        nome = "";
    };
};
int Produtos::id = 0;

class NotasFiscaisItens {
public:
    static int id;
    int idNotaFiscal, idProduto, valor;
    double quantidade;
    Produtos* produto;
    NotasFiscaisItens() {
        NotasFiscaisItens::id++;
        id = NotasFiscaisItens::id;
        produto = new Produtos();
        idNotaFiscal = idProduto = valor = 0;
        quantidade = 0;
    };
};
int NotasFiscaisItens::id = 0;


class NotasFiscais {
public:
    static int id;
    int data;
    Clientes *cliente;
    list<NotasFiscaisItens*> notasFiscaisItens;
    NotasFiscais() {
        NotasFiscais::id++;
        id = NotasFiscais::id;
        cliente = new Clientes();
        data = 0;
    };
};
int NotasFiscais::id = 0;

int main() {
    auto notaFiscal = new NotasFiscais();
    notaFiscal->data = 20231023;
    notaFiscal->cliente->nome = "Gustavo";
    
    auto notaFiscailItem = new NotasFiscaisItens();
    notaFiscailItem->quantidade = 1;
    notaFiscailItem->produto->nome = "Martelo";
    notaFiscailItem->produto->valor = 1000;

    return 0;
}
