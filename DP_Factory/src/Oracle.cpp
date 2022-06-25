//
// Created by Christofer Chaves on 24/06/2022.
//

#include "Oracle.h"

string Oracle::getHost() {
    return host;
}

void Oracle::setHost(const string &host) {
    Oracle::host = host;
}

Oracle::Oracle() = default;

Oracle::~Oracle() = default;

void Oracle::connect() {
    cout << "Oracle::connect()" << endl;
}
