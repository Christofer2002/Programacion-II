//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRUCTURAL_BRIDGE_ENVIOTIERRA_H
#define DP_STRUCTURAL_BRIDGE_ENVIOTIERRA_H
#include "IEnvio.h"

class EnvioTierra  : public IEnvio {
    public:
        EnvioTierra();
        ~EnvioTierra();
        void enviar() override;
        void procesarEnvio() override;
        void procesarEntrega() override;
};


#endif //DP_STRUCTURAL_BRIDGE_ENVIOTIERRA_H
