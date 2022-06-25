//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_FACTORY_IDATABASE_H
#define DP_FACTORY_IDATABASE_H

#include "iostream"
#include "string"

using namespace std;

class IDataBase {
public:
    virtual void connect() = 0;
    virtual string getHost() = 0;
    virtual ~IDataBase() {};
};

#endif //DP_FACTORY_IDATABASE_H
