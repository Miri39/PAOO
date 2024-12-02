#include "./../headers/MyClass.hpp"

MyClass::MyClass(int value)
    {
        this->data = new int(value);
    }

MyClass::MyClass(const MyClass& other)
    {
        this->data = new int(*other.data);
    }

MyClass& MyClass::operator=(const MyClass& rhs) {
    if (this != &rhs) {
        *data = *rhs.data;
    }
    return *this;
}

MyClass::~MyClass() {
    delete data;
}

int MyClass::getData() const {
    return *data;
}