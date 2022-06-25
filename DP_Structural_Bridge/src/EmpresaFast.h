//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_STRUCTURAL_BRIDGE_EMPRESAFAST_H
#define DP_STRUCTURAL_BRIDGE_EMPRESAFAST_H
#include "IEmpresaMensajera.h"

class EmpresaFast : public IEmpresaMensajera {
private:
    IEnvio* envio;
public:
    EmpresaFast();
    EmpresaFast(IEnvio* envio);
    ~EmpresaFast();
    void enviar() override;
    void procesarEnvio() override;
    void procesarEntrega() override;
    IEnvio *getEnvio() const;
    void setEnvio(IEnvio *envio);
};


#endif //DP_STRUCTURAL_BRIDGE_EMPRESAFAST_H
