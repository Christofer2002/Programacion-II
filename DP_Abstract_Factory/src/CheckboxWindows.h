//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_CHECKBOXWINDOWS_H
#define DP_ABSTRACT_FACTORY_CHECKBOXWINDOWS_H
#include "ICheckbox.h"


class CheckboxWindows : public ICheckbox {
public:
    CheckboxWindows();
    ~CheckboxWindows();
    void paint() override;
};


#endif //DP_ABSTRACT_FACTORY_CHECKBOXWINDOWS_H
