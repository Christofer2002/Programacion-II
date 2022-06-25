//
// Created by Christofer Chaves on 25/06/2022.
//

#include "Application.h"

Application::Application() {

}

Application::~Application() {

}

void Application::paint() {
    button->paint();
    checkbox->paint();
}

Application Application::configureGUI(IFactoryAbstract *factory) {
   checkbox = factory->createCheckbox();
    button = factory->createButton();
    return *this;
}
