//
// Created by Christofer Chaves on 24/06/2022.
//

#include <iostream>
#include "Mercado.h"
#include "IDescuento.h"
#include "ConDescuento.h"
#include "SinDescuento.h"

using namespace std;

int main() {
    IDescuento* conDescuento = new ConDescuento();
    IDescuento* sinDescuento = new SinDescuento();

    Mercado* mercado = new Mercado();
    mercado->setPrecio(100);

    mercado->aplicarDescuento(sinDescuento);
    cout << "Precio sin descuento: " << mercado->getPrecio() << endl;

    mercado->aplicarDescuento(conDescuento);
    cout << "Precio con descuento: " << mercado->getPrecio() << endl;
}