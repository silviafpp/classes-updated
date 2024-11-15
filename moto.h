#ifndef MOTO_H
#define MOTO_H
#include "veiculo.h"
using namespace std;

class Moto : public Veiculo {
private:
    string tipoDeGuidao;

public:
    Moto(const string &nome, const string &guidao);
    void mostrarDetalhes() const override;
};

#endif // MOTO_H
