#pragma once

class MyClass {
private:
    int* data;
public:
    MyClass(int value = 0);

    MyClass(const MyClass& other);

    MyClass& operator=(const MyClass& rhs);

    ~MyClass();

    int getData() const;
};