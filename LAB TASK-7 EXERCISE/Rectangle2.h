#pragma once
#include "Rectangle2.h"

class Rectangle{
    private:
         float length;
         float width;
    public:
     Rectangle();// constructor
     ~Rectangle(); //destructor

     void setLength(float len);//accessor method
     void setWidth(float wid);//accessor method

     float getLength() const;
     float getWidth();

     float calculateArea() const;//member function

};
