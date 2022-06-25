//
// Created by Christofer Chaves on 24/06/2022.
//
#include <iostream>
#include "EnvioMar.h"
#include "EnvioTierra.h"
#include "EmpresaFast.h"
#include "IEnvio.h"

using namespace std;

int main() {
    IEnvio *envioMar = new EnvioMar();
    IEnvio *envioTierra = new EnvioTierra();

    IEmpresaMensajera *empresaFast = new EmpresaFast();

    empresaFast = new EmpresaFast(envioMar);

    empresaFast->enviar();
    empresaFast->procesarEnvio();
    empresaFast->procesarEntrega();

    empresaFast = new EmpresaFast(envioTierra);
    empresaFast->enviar();
    empresaFast->procesarEnvio();
    empresaFast->procesarEntrega();
}