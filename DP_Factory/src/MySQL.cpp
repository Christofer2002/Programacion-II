//
// Created by Christofer Chaves on 24/06/2022.
//

#include "MySQL.h"

void MySQL::setHost(const string &host) {
    MySQL::host = host;
}

string MySQL::getHost() {
    return host;
}

MySQL::MySQL() {

}

MySQL::~MySQL() {

}

void MySQL::connect() {
    cout << "MySQL::connect()" << endl;
}
