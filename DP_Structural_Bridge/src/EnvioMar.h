//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRUCTURAL_BRIDGE_ENVIOMAR_H
#define DP_STRUCTURAL_BRIDGE_ENVIOMAR_H
#include "IEnvio.h"

class EnvioMar : public IEnvio {
public:
    EnvioMar();
    ~EnvioMar();
    void enviar() override;
    void procesarEnvio() override;
    void procesarEntrega() override;
};



#endif //DP_STRUCTURAL_BRIDGE_ENVIOMAR_H
