//
// Created by truefinch on 10.01.19.
//

#pragma once

#include <string>

class Printer {
public:
    explicit Printer() = default;
    std::string Print() {
        return "Hello, World!";
    }
    std::string Print1() {
        return "Hello, travis!";
    }
};
