#include "moto.h"
#include <iostream>
using namespace std;

Moto::Moto(const string &nome, const string &guidao) : Veiculo(nome), tipoDeGuidao(guidao) {}

void Moto::mostrarDetalhes() const {
    cout << "Moto: " << nome << ", Tipo de Guidão: " << tipoDeGuidao << endl;
}
