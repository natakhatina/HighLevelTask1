#include <iostream>
#include "headers/classP.h"

int main() {
    float a=1;
    float b=2;
    std::cout<<"x = "<<a<<std::endl;
    std::cout<<"&x = "<<&a<<"  "<<"&y = "<<&b<<std::endl;
    Point P(a,b);
    ShadowPoint SP(0,0);

    SP.setX(P.getX()); // передали указатель на переменную х класса Point и установила его как х в классе ShadowPoint
                       // в методе setX увеличили значение, хранимое в указателе, на 1
    std::cout<<"&x = "<<SP.getX()<<std::endl; // Получим адрес переменной х класса Point
    std::cout<<"x = "<<P.ggetX()<<std::endl; // Получим значение х класса Point

    return 0;
}