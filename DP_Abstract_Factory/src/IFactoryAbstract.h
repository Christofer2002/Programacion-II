//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_IFACTORYABSTRACT_H
#define DP_ABSTRACT_FACTORY_IFACTORYABSTRACT_H
#include "IButton.h"
#include "ICheckbox.h"

using namespace std;

class IFactoryAbstract {
public:
    virtual IButton* createButton() = 0;
    virtual ICheckbox* createCheckbox() = 0;
};


#endif //DP_ABSTRACT_FACTORY_IFACTORYABSTRACT_H
