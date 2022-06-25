//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_ABSTRACT_FACTORY_MACBUTTON_H
#define DP_ABSTRACT_FACTORY_MACBUTTON_H
#include "IButton.h"

class MacButton : public IButton {
public:
    MacButton();
    ~MacButton();
    void paint() override;
};


#endif //DP_ABSTRACT_FACTORY_MACBUTTON_H
