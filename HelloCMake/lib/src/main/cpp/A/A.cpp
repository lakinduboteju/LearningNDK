//
// Created by Lakindu Boteju on 6/19/19.
//

#include <A.h>
#include <B.h>

std::string A() {
    std::string sRet("A");
    sRet += B();
    return sRet;
}
