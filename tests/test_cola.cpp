//Pablo
#include "Cola.h"
#include <cassert>
#include <iostream>

int main(){
    Cola c;
    assert(c.vacia());
    assert(c.tam()==0);
    std::cout << "test_cola OK\n";
    return 0;
}