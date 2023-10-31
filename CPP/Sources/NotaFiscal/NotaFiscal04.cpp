#include <iostream>
#include <cstdio>
#include <string>
#include <list>

// desafio aula 30/10/2023 implementar adicionarItem
// 
// desafio aula 06/11/2023 implementar lista de produtos e 
// adicionar no notasFiscaisItens os dados do produto

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
	int id, valor=0;
	string nome;
	Produtos() {
		id = ++Produtos::cnt;
	};
};
int Produtos::cnt = 0;

class NotasFiscaisItens {
public:
	static int cnt;
	int id, idProduto=0, valor=0;
	double quantidade=0;
	NotasFiscaisItens() {
		id = ++NotasFiscaisItens::cnt;
	};
};
int NotasFiscaisItens::cnt = 0;

class NotasFiscais {
public:
	static int cnt;
	int id, idCliente=0, data=0;
	list<NotasFiscaisItens*> notasFiscaisItens;
	NotasFiscais() {
		id = ++NotasFiscais::cnt;
	};
	bool adicionarItem(int idProduto, int valor, double quantidade) {
		auto notaFiscalItem = new NotasFiscaisItens();
		notaFiscalItem->idProduto = idProduto;
		notaFiscalItem->quantidade = quantidade;
		notaFiscalItem->valor = valor;
		notasFiscaisItens.push_back(notaFiscalItem);
		return true;
	};
	void printa() {
		printf("\nID da nota fiscal: %i", id);
		printf("\nID do cliente: %i", idCliente);
		printf("\nData da nota fiscal: %i", data);
		printf("\nItens da nota:");

		for (auto item : notasFiscaisItens) {
			printf("\n  ID do produto: %i", item->id);
			printf("\n  Quantidade: %lf", item->quantidade);
			printf("\n  Valor: %i", item->valor);
		}
	};
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

	notaFiscal->adicionarItem(1, 12345, 1) ? printf("Deu certo!") : printf("Deu ruim");
	notaFiscal->adicionarItem(2, 1234, 1) ? printf("Deu certo!") : printf("Deu ruim");
	
	notaFiscal->printa();

	return 0;
}
