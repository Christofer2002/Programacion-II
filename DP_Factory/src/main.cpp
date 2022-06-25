//
// Created by Christofer Chaves on 24/06/2022.
//
#include "FactoryMethod.h"
#include "IDataBase.h"

int main() {
    IDataBaseFactory *factory = new FactoryMethod();

    IDataBase *mySQL;
    IDataBase *oracle;

    mySQL = factory->createDataBase(Format::MySQL);
    mySQL->connect();

    oracle = factory->createDataBase(Format::Oracle);
    oracle->connect();

    return 0;
}