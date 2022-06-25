//
// Created by Christofer Chaves on 24/06/2022.
//

#ifndef DP_FACTORY_MYSQL_H
#define DP_FACTORY_MYSQL_H
#include "IDataBase.h"


class MySQL  : public IDataBase {
private:
    string host;
public:
    string getHost() override;
    void setHost(const string &host);
    MySQL();
    ~MySQL() override;
    void connect() override;
};


#endif //DP_FACTORY_MYSQL_H
