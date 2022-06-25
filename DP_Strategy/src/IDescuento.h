//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRATEGY_DESCUENTO_H
#define DP_STRATEGY_DESCUENTO_H
#include <iostream>

using namespace std;

class IDescuento {
public:
    virtual double obtenerPorcentajeDescuento() = 0;
};


#endif //DP_STRATEGY_DESCUENTO_H
