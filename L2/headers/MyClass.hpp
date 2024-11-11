#pragma once
#include <iostream>

class MyClass {
public:
    MyClass(int v = 0) : value(v) {
        std::cout << "MyClass constructed with value: " << value << std::endl;
    }

    MyClass(MyClass&&) = delete;  // // 6:similar cu a-l face privat, acest move constructor nu va mai putea fi folosit

    ~MyClass() {
        std::cout << "MyClass destructed\n";
    }

    int getValue() const { return value; }

private:
    int value;
};


class Empty{};
