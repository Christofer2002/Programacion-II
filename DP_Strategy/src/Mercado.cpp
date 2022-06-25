//
// Created by Christofer Chaves on 24/06/2022.
//

#include "Mercado.h"

Mercado::Mercado() {

}

double Mercado::getPrecio() const {
    return precio;
}

void Mercado::setPrecio(double precio) {
    this->precio = precio;
}

void Mercado::aplicarDescuento(IDescuento* descuento) {
    double descuentoAplicado = descuento->obtenerPorcentajeDescuento();
    double precioConDescuento = precio - (precio * descuentoAplicado);
    setPrecio(precioConDescuento);
}

Mercado::~Mercado() {

}
