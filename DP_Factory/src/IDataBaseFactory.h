//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_FACTORY_IDATABASEFACTORY_H
#define DP_FACTORY_IDATABASEFACTORY_H
#include "IDataBase.h"
#include "Format.h"

class IDataBaseFactory {
public:
    virtual IDataBase* createDataBase(Format) = 0;
};


#endif //DP_FACTORY_IDATABASEFACTORY_H
