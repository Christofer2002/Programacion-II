//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRATEGY_SINDESCUENTO_H
#define DP_STRATEGY_SINDESCUENTO_H
#include "IDescuento.h"
#include <iostream>

class SinDescuento : public IDescuento {
private:
    double descuento;
public:
    SinDescuento();
    double getDescuento() const;
    void setDescuento(double descuento);
    double obtenerPorcentajeDescuento() override;
};


#endif //DP_STRATEGY_SINDESCUENTO_H
