#include "carro.h"
#include "moto.h"
#include <iostream>
using namespace std;

int main() {
    Carro carro("Porsche", 2);
    Moto moto("Desportiva", "Desportivo");

    carro.mostrarDetalhes();
    moto.mostrarDetalhes();

    return 0;
}
