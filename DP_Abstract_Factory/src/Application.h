//
// Created by Christofer Chaves on 25/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_APPLICATION_H
#define DP_ABSTRACT_FACTORY_APPLICATION_H
#include "IButton.h"
#include "CheckboxMac.h"
#include "CheckboxWindows.h"
#include "FactoryWindows.h"
#include "FactoryMac.h"

class Application {
private:
    IButton* button;
    ICheckbox* checkbox;
public:
    Application();
    ~Application();
    void paint();
    Application configureGUI(IFactoryAbstract* factory);
};


#endif //DP_ABSTRACT_FACTORY_APPLICATION_H
