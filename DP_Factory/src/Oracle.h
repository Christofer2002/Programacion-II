//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_FACTORY_ORACLE_H
#define DP_FACTORY_ORACLE_H
#include "IDataBase.h"

class Oracle : public IDataBase {
private:
    string host;
public:
    string getHost() override;
    void setHost(const string &host);
    Oracle();
    ~Oracle() override;
    void connect() override;
};


#endif //DP_FACTORY_ORACLE_H
