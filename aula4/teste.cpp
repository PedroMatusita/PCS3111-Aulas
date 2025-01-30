#include <iostream>
#include <string>

using namespace std;

#include "Produto.h"
#include "Pedido.h"

/**
 * Implementar as funcoes teste
 **/
void teste1() {
    Produto *p1 = new Produto();
    p1 -> SetNome("Escova de dentes");
    p1 -> SetPreco(5.49);
    p1 -> imprimir();

}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
    Produto *p1 = new Produto();
    p1 -> SetNome("Agua");
    p1 -> SetPreco(4.90);

    Produto *p2 = new Produto();
    p2 -> SetNome("Desodorante");
    p2 -> SetPreco(15.59);

    Pedido *ped = new Pedido();
    ped -> adicionar(p1);
    ped -> adicionar(p2);
    ped -> imprimir();
}

