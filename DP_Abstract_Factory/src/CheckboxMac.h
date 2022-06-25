//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_CHECKBOXMAC_H
#define DP_ABSTRACT_FACTORY_CHECKBOXMAC_H
#include "ICheckbox.h"


class CheckboxMac : public ICheckbox {
public:
    CheckboxMac();
    ~CheckboxMac();
    void paint() override;
};


#endif //DP_ABSTRACT_FACTORY_CHECKBOXMAC_H
