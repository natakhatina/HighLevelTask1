#include "../headers/classP.h"
#include <iostream>

float *Point::getX()  { // метод для показа адреса х
    return &x;
}
float Point::ggetX() const { // метод для показа значения х
    return x;
}
void Point::setX(float x) {
    Point::x = x;
}

float Point::getY() const {
    return y;
}

void Point::setY(float y) {
    Point::y = y;
}

Point::Point(float x1, float y1) {
    x=x1;
    y=y1;
}
//////////////////////////////////////////////
float *ShadowPoint::getX() const {
    return x;
}

void ShadowPoint::setX(float *x1) {
    *x1=*x1+1;
    ShadowPoint::x = x1;
}

float *ShadowPoint::getY() const {
    return y;
}

void ShadowPoint::setY(float *y) {
    ShadowPoint::y = y;
}

ShadowPoint::ShadowPoint(float *x1, float *y1) {
    ShadowPoint::x=x1;
    ShadowPoint::y=y1;
}