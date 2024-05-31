#include <iostream>
#include "Rectangle2.h"
using namespace std;

Rectanle::Rectangle(){
    length = 0.0;
    width = 0.0;
}
Rectangle::~Rectangle(){

}
void Rectangle::setLength(float len){
    length = len;
}
void Rectangle::setWidth(float wid){
    width = wid;
}
float Rectangle::getLenth() const{
    return length; 
}
float Rectangle::getWidth() const{
    return width;
}
float Rectangle::calculateArea() const{
    return length * width;
}

int main(){
    Rectangle rect1;//first object
    Rectangle rect2;//second object
    float length1, width1;
    float length2, width2;
    cout<<"Enter the length of the first rectangle: ";
    cin>>length1;
    rect1.setLength(length1);

    cout<<"Emter the width of the first rectangle: ";
    cin>>width1;
    rect1.setWidth(width1)

    float area1 = rect1.calculateArea();
    cout<<"The Area of the first rectangle is: "<< area1<<endl;
    
  cout<<"Enter the length of the second rectangle: ";
  cin>>length2;
  
  cout<<"Enter the width of the second rectangle: ";
  cin >>width2;

  Rectangle rect2(length2, width2);

  float area2 = rect2.calculateArea()
  cout<<"The area of the second rectangle is: "<< area2<<endl;
  return 0;
}