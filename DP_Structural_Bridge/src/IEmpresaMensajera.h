//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRUCTURAL_BRIDGE_IEMPRESAMENSAJERA_H
#define DP_STRUCTURAL_BRIDGE_IEMPRESAMENSAJERA_H
#include "IEnvio.h"

class IEmpresaMensajera {
public:
    virtual ~IEmpresaMensajera() {}
    virtual void enviar() = 0;
    virtual void procesarEnvio() = 0;
    virtual void procesarEntrega() = 0;
};


#endif //DP_STRUCTURAL_BRIDGE_IEMPRESAMENSAJERA_H
