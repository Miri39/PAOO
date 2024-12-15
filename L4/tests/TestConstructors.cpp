#include <iostream>
#include <memory>
#include "./../headers/MyClass.hpp"

int main() {
    std::shared_ptr<MyClass> obj(new MyClass(1));
    std::cout << "Data value: " << obj->getValue() << "\n";

    std::shared_ptr<MyClass> obj2(new MyClass(2), MyClassDeleter());

    // MyClass my1;
    // MyClass my2 = my1;  
    // MyClass my3(std::move(my1));

    return 0;
}
