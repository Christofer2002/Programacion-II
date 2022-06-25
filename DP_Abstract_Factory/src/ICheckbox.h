//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_ICHECKBOX_H
#define DP_ABSTRACT_FACTORY_ICHECKBOX_H
#include <iostream>
using namespace std;

class ICheckbox {
public:
    virtual void paint() = 0;
    virtual ~ICheckbox(){}
};
#endif //DP_ABSTRACT_FACTORY_ICHECKBOX_H


