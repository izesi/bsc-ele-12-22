#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
     length = 0.0;
     width = 0.0;

}
Rectangle::~Rectangle(){

}

void Rectangle:: setLength(float len){
    length = len;
}
Void Rectangle::setwidth(float wid){
     width = wid;
}
float Rectangle::getLength() const{
    return length;
}
float Rectangle::getWidth()const{
    return width;
}
float Rectangle::calculateArea()const{
    return length * width;
}

int main(){
    Rectangle rect;
    float length, width;
    cout<< "Enter the width of the rectangle: ";
    cin>>length;
    rect.setLength(length);

    cout<<"Enter the width of the rectangle:";
    cin >>width;
    rect.setWidth(width);

    float area = rect.calculateArea()
    cout<<"The Area of the rectangle is: "<< area <<endl;
    return 0;

}