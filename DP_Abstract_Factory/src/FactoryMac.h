//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_FACTORYMAC_H
#define DP_ABSTRACT_FACTORY_FACTORYMAC_H
#include "MacButton.h"
#include "CheckboxMac.h"
#include "IFactoryAbstract.h"

class FactoryMac : public IFactoryAbstract {
public:
    FactoryMac();
    ~FactoryMac();
    ICheckbox* createCheckbox() override;
    IButton* createButton() override;
};


#endif //DP_ABSTRACT_FACTORY_FACTORYMAC_H
