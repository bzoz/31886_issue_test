#include <iostream>
#include "lib_name.hpp"

double foo2() {
    std::cout << "FOO " << lib_name::instance.i << std::endl;
    return lib_name::instance.i;
}

double lib_name::lib::foo() {
    return foo2();
}

