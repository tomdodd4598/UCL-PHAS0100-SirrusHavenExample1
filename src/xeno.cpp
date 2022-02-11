#include "grid.hpp"
#include "xeno.hpp"

#include <memory>

namespace xeno {
    
    void test_func() {
        Grid<double> grid(5, 5, 0.0);

        auto unique = std::make_unique<Grid<bool>>(5, 5, true);

        unique->print();
    }
}
