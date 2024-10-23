#pragma once

class MyClass{

    private:
    static int counter;
    int size;
    int weight;

    public:
    void Show();
    MyClass(const MyClass &obj); //copy
    MyClass(MyClass &&obj); //move
    MyClass();
    MyClass(int, int);
    ~MyClass();
};