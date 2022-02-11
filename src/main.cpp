#include "units.hpp"
#include "xeno.hpp"

#include <algorithm>
#include <cctype>
#include <functional>
#include <iostream>
#include <map>
#include <string>

int main(int argc, char** argv) {

    if (argc != 2) {
        throw std::runtime_error("Program requires one argument!");
    }

    auto to_lowercase = [](std::string& str) {
        std::transform(str.begin(), str.end(), str.begin(), [](char c){ return std::tolower(c); });
    };

    std::map<std::string, std::function<void()>> m{
        {"units", units::test_func},
        {"xeno", xeno::test_func},
    };

    auto arg = std::string(argv[1]);
    to_lowercase(arg);

    if (auto func = m[arg]) {
        func();
    }
    else {
        throw std::runtime_error("Function entry \"" + arg + "\" doesn't exist!");
    }

    return 0;
}
