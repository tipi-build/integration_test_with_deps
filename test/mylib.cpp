#include "integration_test_with_deps/mylib.hpp"
#include <iostream>

int main() {
    std::cout 
        << "Hello world from tipi.build, this is a test! Calling our test lib returns: " 
        << tipi::integration_tests::project_with_deps::library_call() 
        << std::endl;

    return 0;
}