//
// Created by Christofer Chaves on 25/06/2022.
//
#include "Application.h"
#include "FactoryWindows.h"
#include "FactoryMac.h"

int main(){
    IFactoryAbstract* factory = new FactoryWindows();
    Application app = Application().configureGUI(factory);
    app.paint();

    factory = new FactoryMac();
    app = Application().configureGUI(factory);
    app.paint();
    return 0;
}