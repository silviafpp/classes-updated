#include "carro.h"
#include <iostream>
using namespace std;

Carro::Carro(const string &nome, int portas) : Veiculo(nome), numeroDePortas(portas) {}

void Carro::mostrarDetalhes() const {
    cout << "Carro: " << nome << ", Número de portas: " << numeroDePortas << endl;
}
