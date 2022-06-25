//
// Created by Christofer Chaves on 24/06/2022.
//

#include "FactoryMethod.h"

IDataBase *FactoryMethod::createDataBase(Format format) {
    switch (format) {
        case Format::Oracle:
            return new Oracle();
        case Format::MySQL:
            return new MySQL();
        default:
            return nullptr;
    }
}
