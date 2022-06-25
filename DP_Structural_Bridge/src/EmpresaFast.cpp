//
// Created by Christofer Chaves on 24/06/2022.
//

#include "EmpresaFast.h"

EmpresaFast::EmpresaFast() {

}

EmpresaFast::~EmpresaFast() {

}

void EmpresaFast::enviar() {
    envio->enviar();
}

void EmpresaFast::procesarEnvio() {
    envio->procesarEnvio();
}

void EmpresaFast::procesarEntrega() {
    envio->procesarEntrega();
}

IEnvio *EmpresaFast::getEnvio() const {
    return envio;
}

void EmpresaFast::setEnvio(IEnvio *envio) {
    EmpresaFast::envio = envio;
}

EmpresaFast::EmpresaFast(IEnvio *envio) {
    EmpresaFast::envio = envio;

}
