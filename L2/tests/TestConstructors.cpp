#include <iostream>
#include "./../headers/MyClass.hpp"

int main() {
    MyClass obj1(10);
    std::cout << "Object initialized with value: " << obj1.getValue() << "\n";

    Empty e1; // silently written
    Empty e2 = e1; // silently written
    Empty e3 = Empty(e2); // silently written


    return 0;
}