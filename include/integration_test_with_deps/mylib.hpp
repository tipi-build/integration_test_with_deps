#include <string>

// this is part of the test of nested dependencies:
#include <integration_test_project_deep/mylib.hpp>

namespace tipi::integration_tests::project_with_deps {

    using namespace std::string_literals;

    inline std::string library_call() {
        return "tipi-build/integration_test_project_with_deps@dep-as-submodule::library_call()->"s + tipi::integration_tests::project_deep::library_call(); 
    }
}