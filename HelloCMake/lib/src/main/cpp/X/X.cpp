//
// Created by Lakindu Boteju on 6/19/19.
//

#include <X.h>
#include <B.h>

std::string X() {
    std::string sRet("X");
    sRet += B();
    return sRet;
}
