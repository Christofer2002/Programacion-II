//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_WINDOWSBUTTON_H
#define DP_ABSTRACT_FACTORY_WINDOWSBUTTON_H
#include "IButton.h"

class WindowsButton : public IButton {
public:
    WindowsButton();
    ~WindowsButton();
    void paint() override;
};


#endif //DP_ABSTRACT_FACTORY_WINDOWSBUTTON_H
