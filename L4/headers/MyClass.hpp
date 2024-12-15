#pragma once
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int d) {
        data = new int(d);
        std::cout << "Data: " << *data << "\n";
    }

    MyClass(const MyClass&) = delete;
    MyClass& operator=(const MyClass&) = delete;
    MyClass(MyClass&&) = delete;
    MyClass& operator=(MyClass&&) = delete;

    ~MyClass() {
        if (data) {
            std::cout << "Data delered: " << *data << "\n";
            delete data;
        }
    }

    int getValue() const {
        return *data;
    }

private:
    int* data;
};

class MyClassDeleter {
public:
    void operator()(MyClass* ptr) const {
        delete ptr;
        std::cout << "Custom deleter from shared\n";
    }
};
