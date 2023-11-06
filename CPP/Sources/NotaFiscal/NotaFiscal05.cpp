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

list<Produtos*> produtosList;

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
	Produtos* getProduto(int id) {
        for(auto p : produtosList) {
            if(p->id == id) {
                return p;
            }
        }
        return NULL;
	}
	bool adicionarItem(int idProduto, double quantidade) {
	    Produtos* p = getProduto(idProduto);
	    if(p == NULL) {
	        printf("\nERRO: Produto id=%i nao existe na tabela de produtos.", idProduto);
	        return false;
	    }
		auto notaFiscalItem = new NotasFiscaisItens();
		notaFiscalItem->idProduto = idProduto;
		notaFiscalItem->quantidade = quantidade;
		notaFiscalItem->valor = p->valor;
		notasFiscaisItens.push_back(notaFiscalItem);
		return true;
	};
	void printa() {
	    printf("\n---------------------------------------");
	    printf("\nNOTA FISCAL NUMERO %i", id);
	    printf("\n---------------------------------------");
		printf("\nID do cliente: %i", idCliente);
		printf("\nData da nota fiscal: %i", data);
	    printf("\n--------------+------------+-----------");
        printf("\nID do produto | Quantidade |      Valor");
        printf("\n--------------+------------+-----------");
		for (auto item : notasFiscaisItens) {
			printf("\n%13i | %10.2lf | %10.2lf", item->id, item->quantidade, ((long)item->valor)/100.0);
		}
		printf("\n--------------+------------+-----------");
	};
};
int NotasFiscais::cnt = 0;


int main() {
	auto cliente = new Clientes();
	cliente->nome = "Gustavo";

	auto produto01 = new Produtos();
	produto01->nome = "martelo";
	produto01->valor = 4567;

    produtosList.push_back(produto01);
    
    auto produto02 = new Produtos();
	produto02->nome = "alicate";
	produto02->valor = 2345;

    produtosList.push_back(produto02);

	auto notaFiscal = new NotasFiscais();
	notaFiscal->data = 20231023;
	notaFiscal->idCliente = 0;

	notaFiscal->adicionarItem(1, 1) || printf("\nNao foi possivel adicionar o item na nota");
	notaFiscal->adicionarItem(1, 1) || printf("\nNao foi possivel adicionar o item na nota");
	notaFiscal->adicionarItem(1, 1) || printf("\nNao foi possivel adicionar o item na nota");
	notaFiscal->adicionarItem(2, 1) || printf("\nNao foi possivel adicionar o item na nota");
	notaFiscal->adicionarItem(3, 1) || printf("\nNao foi possivel adicionar o item na nota") && (exit(1), 1); 
	notaFiscal->printa();

	return 0;
}

