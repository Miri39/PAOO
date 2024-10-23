#include <iostream>
#include "../headers/MyClass.hpp"

int MyClass::counter;

MyClass::MyClass()
{
    std::cout<<"Empty object created"<<std::endl;
    counter++;
}

MyClass::MyClass(int size, int weight){
    std::cout<<"Created object with size: " << size << " and weight: " << weight << std::endl;
    this->size = size;
    this->weight = weight;
    counter++;

}

MyClass::~MyClass(){
    std::cout<<"An object was destoried"<<std::endl;
    counter--;
}

void MyClass::Show(){
    std::cout<<"There are " << counter << " objects" << std::endl;
    std::cout<< "Size: " << this->size << ", weight: " << this->weight << std::endl << std::endl;;
}

MyClass::MyClass(const MyClass &obj){
    std::cout<<"Copy Constructor called"<<std::endl;
    this->size = obj.size;
    this->weight = obj.weight;
    counter++;
}

MyClass::MyClass(MyClass &&obj){
    
}


