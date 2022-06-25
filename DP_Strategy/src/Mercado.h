//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRATEGY_MERCADO_H
#define DP_STRATEGY_MERCADO_H
#include "IDescuento.h"

class Mercado {
private:
    double precio;
public:
    Mercado();
    double getPrecio() const;
    void setPrecio(double precio);
    void aplicarDescuento(IDescuento* descuento);
    ~Mercado();
};


#endif //DP_STRATEGY_MERCADO_H
