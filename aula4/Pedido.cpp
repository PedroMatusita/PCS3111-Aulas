/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

#include "Pedido.h"
#include <iostream>



void Pedido::imprimir() {
    std::cout << "Pedido com " << quantidade << " produtos - " << getPrecoTotal() << " reais no total" << std::endl;

    for (int i = 0; i < quantidade; i++) {
        produtos[i]->imprimir();
    }
}

bool Pedido::adicionar(Produto* produto){
    if  (quantidade > MAXIMO_DE_PRODUTOS){
        return false;
    }

    produtos[quantidade] = produto;
    quantidade++;
    return true;
}

double Pedido::getPrecoTotal() {
    double soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += produtos[i]-> GetPreco();
    }

    return soma;
}
