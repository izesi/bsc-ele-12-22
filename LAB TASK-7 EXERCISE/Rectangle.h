#pragma once
#include <string>
#include Rectangle_h

class Rectangle{
    private:
    float length;
    float width;

    public:
    Rectangle();//constructor
    ~Rectangle();// destructor

    void setLength(float len);// accessor method to set length
    void setwidth(float wid);//accesor method to get width

    float calculateArea() const; //member function to calculate area
};