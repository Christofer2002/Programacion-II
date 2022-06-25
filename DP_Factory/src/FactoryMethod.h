//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_FACTORY_FACTORYMETHOD_H
#define DP_FACTORY_FACTORYMETHOD_H
#include "IDataBaseFactory.h"
#include "MySQL.h"
#include "Oracle.h"


class FactoryMethod : public IDataBaseFactory {
public:
    IDataBase* createDataBase(Format) override;
};


#endif //DP_FACTORY_FACTORYMETHOD_H
