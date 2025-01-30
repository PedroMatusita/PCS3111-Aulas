/*
 * Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 */
#ifndef PEDIDO_H
#define PEDIDO_H

#include "Produto.h"
#define MAXIMO_DE_PRODUTOS 10

class Pedido {
    /*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */
    private:
        int quantidade = 0;
        Produto *produtos[MAXIMO_DE_PRODUTOS-1];

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
    public: 

        bool adicionar(Produto* produto);

        double getPrecoTotal();

        void imprimir();
};

#endif