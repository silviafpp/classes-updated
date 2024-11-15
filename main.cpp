#include "carro.h"
#include "moto.h"
#include <iostream>
using namespace std;

int main() {
    Carro carro("Porsche", 2);
    Moto moto("Desportiva", "Desportivo");

    Veiculo* veiculos[] = { &carro, &moto };

    for (Veiculo* veiculo : veiculos) {
        veiculo->mostrarDetalhes();
    }

    return 0;
}
