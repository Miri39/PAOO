#include <iostream>
#include "./../headers/MyClass.hpp"

void testCopyConstructor() {
    MyClass obj1(42);
    MyClass obj2 = obj1; // Copy all parts
    std::cout << "obj1: " << obj1.getData() << ", obj2: " << obj2.getData() << std::endl;
}

void testAssignmentOperator() {
    MyClass obj1(42);
    MyClass obj2;
    obj2 = obj1; // Copy assignment
    std::cout << "obj1: " << obj1.getData() << ", obj2: " << obj2.getData() << std::endl;
}

void testSelfAssignment() {
    MyClass obj(42);
    obj = obj; // Self-assignment
    std::cout << "obj: " << obj.getData() << std::endl;
}

int main() {
    testCopyConstructor();
    testAssignmentOperator();
    //testSelfAssignment();
    return 0;
}
