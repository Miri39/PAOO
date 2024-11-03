#include <iostream>
#include "../headers/MyClass.hpp"

int main(){

    MyClass *c = new MyClass();
    MyClass *c1 = new MyClass(2,3);
    MyClass *c2 = new MyClass(1,2);
    // MyClass c3 = *c2; //vreau c3 sa fie pointer
    MyClass *c3 = new MyClass(*c2);

    c->Show();

    delete(c1);

    c3->Show();

    delete(c3);

    c2->Show();

    MyClass *c4 = new MyClass(std::move(*c2));

    c2->Show();
    c4->Show();
}