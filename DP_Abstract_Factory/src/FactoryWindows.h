//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_FACTORYWINDOWS_H
#define DP_ABSTRACT_FACTORY_FACTORYWINDOWS_H
#include "IFactoryAbstract.h"
#include "CheckboxWindows.h"
#include "WindowsButton.h"

class FactoryWindows : public IFactoryAbstract {
public:
    FactoryWindows();
    ~FactoryWindows();
    ICheckbox* createCheckbox() override;
    IButton* createButton() override;
};


#endif //DP_ABSTRACT_FACTORY_FACTORYWINDOWS_H
