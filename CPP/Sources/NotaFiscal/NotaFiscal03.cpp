#include <iostream>
#include <cstdio>
#include <string>
#include <list>

// desafio aula 30/10/2023 implementar adicionarItem

using namespace std;

class Clientes {
public:
	static int cnt;
	int id;
	string nome;
	Clientes() {
		id = ++Clientes::cnt;
	};
};
int Clientes::cnt = 0;

class Produtos {
public:
	static int cnt;
	int id, valor;
	string nome;
	Produtos() {
		id = ++Produtos::cnt;
	};
};
int Produtos::cnt = 0;

class NotasFiscaisItens {
public:
	static int cnt;
	int id, idProduto, valor;
	double quantidade;
	NotasFiscaisItens() {
		id = ++NotasFiscaisItens::cnt;
	};
};
int NotasFiscaisItens::cnt = 0;

class NotasFiscais {
public:
	static int cnt;
	int id, idCliente, data;
	list<NotasFiscaisItens*> notasFiscaisItens;
	NotasFiscais() {
		id = ++NotasFiscais::cnt;
	};
	bool adicionarItem(int idProduto, int valor, double quantidade);
};
int NotasFiscais::cnt = 0;


int main() {
	auto cliente = new Clientes();
	cliente->nome = "Gustavo";
	
	auto produto = new Produtos();
	produto->nome = "martelo";
	produto->valor = 12345;

	auto notaFiscal = new NotasFiscais();
	notaFiscal->data = 20231023;
	notaFiscal->idCliente = 0;

	auto notaFiscalItem = new NotasFiscaisItens();
	notaFiscalItem->idProduto = 0;
	notaFiscalItem->quantidade = 1;
	notaFiscalItem->valor = 12345;

	notaFiscal->notasFiscaisItens.insert(
		 notaFiscal->notasFiscaisItens.end()
		,notaFiscalItem);

	return 0;
}

