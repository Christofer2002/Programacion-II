//
// Created by Christofer Chaves on 24/06/2022.
//

#include "ConDescuento.h"

double ConDescuento::getDescuento() const {
    return descuento;
}

void ConDescuento::setDescuento(double descuento) {
    ConDescuento::descuento = descuento;
}

double ConDescuento::obtenerPorcentajeDescuento() {
    return 0.25;
}

ConDescuento::ConDescuento() {

}
