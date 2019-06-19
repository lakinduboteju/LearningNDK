//
// Created by Lakindu Boteju on 6/19/19.
//

#include <B.h>
#include <C.h>

std::string B() {
    std::string sRet("B");
    sRet += C();
    return sRet;
}
