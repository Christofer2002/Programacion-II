//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRUCTURAL_BRIDGE_IENVIO_H
#define DP_STRUCTURAL_BRIDGE_IENVIO_H
#include "iostream"
#include "string"

using namespace std;

class IEnvio {
    public:
    virtual void enviar() = 0;
    virtual void procesarEnvio() = 0;
    virtual void procesarEntrega() = 0;
    virtual ~IEnvio() = default;
};


#endif //DP_STRUCTURAL_BRIDGE_IENVIO_H
