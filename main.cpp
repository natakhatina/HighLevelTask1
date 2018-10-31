#include <iostream>
#include "headers/classP.h"

int main() {
    float a=1;
    float b=2;
    std::cout<<&a<<"  "<<&b<<std::endl;
    Point P(a,b);
    ShadowPoint SP(&a,&b);
    std::cout<<SP.getX()<<"  "<<SP.getY()<<std::endl;
    return 0;
}