#ifndef VEICULO_H
#define VEICULO_H
using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const string &nome);

    virtual void mostrarDetalhes() const;

    virtual ~Veiculo() = default; 
};

#endif // VEICULO_H
