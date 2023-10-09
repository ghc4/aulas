// vim: ts=4 sw=4 sts=4 et number : 
// chcp 65001; c++ 01_0_Completa.cpp && ./a.exe
// https://www.programiz.com/cpp-programming/list
// https://cplusplus.com/reference/list/list/
// https://cplusplus.com/reference/iterator/iterator/

#include <iostream>
#include <string>
#include <list>
using namespace std;
class Pessoas {
    public:
        int id, idade;
        static int cnt;
        string nome, email;
        virtual void printa() {
            printf("CNT...........: %8d\n", Pessoas::cnt);
            printf("ID............: %8d\n", id);
            printf("Nome..........: %s\n",  nome.c_str());
            printf("Idade.........: %3d\n", idade);
            printf("Email.........: %s\n",  email.c_str());
            printf("PTR...........: %p\n",  this);
        }
        Pessoas() {
            ++Pessoas::cnt;
            id = Pessoas::cnt;
        	printf("Classe Pessoas instanciada!\n");
        }
        virtual ~Pessoas() {
            --Pessoas::cnt;
        	printf("Objeto %s destruido!\n", nome.c_str());
        }
};
int Pessoas::cnt = 0;

class PessoasFisicas : public Pessoas {
    public:
        string cpf;
        void printa() {
        	Pessoas::printa();
        	printf("CPF...........: %s\n", cpf.c_str());
        }
};

class PessoasJuridicas : public Pessoas {
    public:
        string cnpj;
        void printa() {
        	Pessoas::printa();
        	printf("CNPJ..........: %s\n", cnpj.c_str());
        }
};

int main() { 
    list<Pessoas*> pessoas;
    
    for(int i=0; i<10; i++) {
        PessoasFisicas *joao = new PessoasFisicas();
        pessoas.insert(pessoas.end(), joao);
        joao->nome = "Joao";
        joao->cpf = "12312312387";
        joao->idade = 222;
        joao->email = "no@spam.com";
        //joao->printa();
        //delete joao;
    }

    PessoasJuridicas *loja = new PessoasJuridicas();
    pessoas.insert(pessoas.end(), loja);
    loja->nome = "Ferragem";
    loja->cnpj = "12123123000112";
    loja->idade = 33;
    loja->email = "no@spame.com";
    //loja->printa();
    //delete loja;

    //list<Pessoas*>::iterator pessoasIterator = pessoas.begin();
    //(*pessoasIterator++)->printa();
    //(*pessoasIterator++)->printa();
    //pessoasIterator = pessoas.begin();
    //delete *pessoasIterator++;
    //delete *pessoasIterator++;

    for (auto i : pessoas) {
        i->printa();
        delete i;
    }

    return 0;
}







