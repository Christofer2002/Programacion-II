//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRATEGY_CONDESCUENTO_H
#define DP_STRATEGY_CONDESCUENTO_H
#include "IDescuento.h"

class ConDescuento : public IDescuento {
private:
    double descuento;
public:
    ConDescuento();
    double getDescuento() const;
    void setDescuento(double descuento);
    double obtenerPorcentajeDescuento() override;
};


#endif //DP_STRATEGY_CONDESCUENTO_H
