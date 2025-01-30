/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

#include "Produto.h"
#include <iostream>

void Produto::SetNome(std::string nome) {
    this->nome = nome;
}

std::string Produto::GetNome() {
    return this -> nome;
}

void Produto::SetPreco(double preco) {
    this->preco = preco;
}

double Produto::GetPreco() {
    return this-> preco;
}

void Produto::imprimir() {
    std::cout << "Nome: " << nome << ", Preco: " << preco << std::endl;
}
