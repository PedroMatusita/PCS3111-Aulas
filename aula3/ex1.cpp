#include <iostream>
using namespace std;

class Produto {
public:
string nome = "";
double preco = 0.0;
double desconto = 0.0;
double calcularValorDeVenda();
void imprimir();
};

double Produto::calcularValorDeVenda(){
    double ValorVenda = preco;
    return ValorVenda * (1- desconto);
};

void Produto::imprimir(){
    cout << "Produto: " << nome << " custa " << calcularValorDeVenda() << endl;
}

void teste1(){
    Produto *p1 = new Produto;
    p1 -> desconto = 0.20;
    p1 -> preco = 1000;
    p1 -> nome = "TV";
    p1 -> imprimir();

}


int main() {
teste1();
return 0;
} 