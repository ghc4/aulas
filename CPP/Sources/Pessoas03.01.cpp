#include <iostream>
#include <string>
using namespace std;
class Pessoas {
  public:
    int id, idade;
    string nome, email;
    void printa() {
    	printf("\nID............: %8d", id);
        printf("\nNome..........: %s",  nome.c_str());
        printf("\nIdade.........: %3d", idade);
        printf("\nEmail.........: %s",  email.c_str());
    }
    Pessoas() {
    	printf("\nClasse Pessoas instanciada!");
    }
    ~Pessoas() {
    	printf("\nObjeto %s destruido!", nome.c_str());
    }
};

class PessoasFisicas : public Pessoas {
  public:
    string cpf;
    void printa() {
    	Pessoas::printa();
    	printf("\nCPF...........: %s", cpf.c_str());
    }
};

class PessoasJuridicas : public Pessoas {
  public:
    string cnpj;
    void printa() {
    	Pessoas::printa();
    	printf("\nCNPJ..........: %s", cnpj.c_str());
    }
};

int main() { 
  PessoasFisicas *joao = new PessoasFisicas();
  joao->id = 1;
  joao->nome = "Joao";
  joao->cpf = "12312312387";
  joao->idade = 222;
  joao->email = "no@spam.com";
  joao->printa();
  delete joao;
  PessoasJuridicas *loja = new PessoasJuridicas();
  loja->id = 2;
  loja->nome = "Ferragem";
  loja->cnpj = "12123123000112";
  loja->idade = 33;
  loja->email = "no@spame.com";
  loja->printa();
  delete loja;
  return 0;
}







