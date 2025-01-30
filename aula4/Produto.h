/*
 * Coloque a definicao da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 *
 *  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */
#include <string>

#ifndef PRODUTO_H
#define PRODUTO_H
class Produto {
    private:
        std::string nome;
        double preco;
        
    public:
        void SetNome(std::string nome);
        std::string GetNome();
        void SetPreco(double preco);
        double GetPreco();

        void imprimir();
};

#endif