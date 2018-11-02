#ifndef HIGHLEVELTASK1_CLASSP_H
#define HIGHLEVELTASK1_CLASSP_H

class Point {
    float x,y;
public:
    float *getX() ;

    float ggetX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    Point(float x1,float y1);
};

class ShadowPoint{
    float *x;
    float *y;
public:
    float *getX() const;

    void setX(float *x1);

    float *getY() const;

    void setY(float *y);

    ShadowPoint(float *x1,float *y1);
};

#endif //HIGHLEVELTASK1_CLASSP_H
