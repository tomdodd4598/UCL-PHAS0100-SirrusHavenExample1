#ifndef GRID_H
#define GRID_H

#include <iostream>
#include <string>
#include <vector>

namespace xeno {

    template<typename TYPE>
    class Grid {
    public:
        Grid(int x_len, int y_len, TYPE def) : x_len{x_len}, y_len{y_len}, internal(y_len, std::vector<TYPE>(x_len, def)) {}
    
        void print() {
            for (const auto& row : internal) {
                for (const TYPE& elem : row) {
                    std::cout << elem << " ";
                }
                std::cout << "\n";
            }
            std::cout << std::endl;
        }

        const int x_len, y_len;
    
    protected:
        std::vector<std::vector<TYPE>> internal;
    };
}

#endif
