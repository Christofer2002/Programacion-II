//
// Created by Christofer Chaves on 24/06/2022.
//

#include "FactoryWindows.h"

FactoryWindows::FactoryWindows() {

}

FactoryWindows::~FactoryWindows() {

}

ICheckbox *FactoryWindows::createCheckbox() {
    return new CheckboxWindows();
}

IButton *FactoryWindows::createButton() {
    return new WindowsButton();
}
