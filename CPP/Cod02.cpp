#include <iostream>
#include <string>
using namespace std;
int main() {
    string nome;
    int idade;
    cout << "Digite seu nome: ";
    getline(cin >> ws, nome);
    cout << "Qual a sua idade? ";
    cin >> idade;
    cout << "Ola " << nome;
    if(idade>=18)
        cout << ", pague seus boletos" << endl;
    else
        cout << ", aproveita a vida enquanto pode." << endl;
}