//
// Created by Christofer Chaves on 24/06/2022.
//

#include "FactoryMac.h"

FactoryMac::FactoryMac() {

}

FactoryMac::~FactoryMac() {

}

ICheckbox *FactoryMac::createCheckbox() {
    return new CheckboxMac();
}

IButton *FactoryMac::createButton() {
    return new MacButton();
}
