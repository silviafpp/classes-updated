#ifndef VEICULO_H
#define VEICULO_H

#include <string>
using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const string &nome);

    virtual void mostrarDetalhes() const = 0;

    virtual ~Veiculo() = default; 
};

#endif // VEICULO_H
