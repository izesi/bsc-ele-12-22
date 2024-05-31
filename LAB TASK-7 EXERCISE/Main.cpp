#include <iostream>
#include "Shapes.h"

using namespace shapes;
using namespace std;

int main() {
    int choice;
    float value1, value2;
    do{
        cout<<"\n1. calculate the area of a squeare "<<endl;
        cout<<"2. calculate the area of a triangle: "<<endl;
        cout<<"3. Calculate the area of a triangle: "<<endl;
        cout<<"4. Quit "<<endl;
        cout<<"Enter your choice: ";
        cin>> choice;

        switch (choice){
         case 1:
            Square square;
            cout<< "Enter the side length og the square: ";
            cin>>value1;
            square.setSideLength(value1);
            cout<<"Area of the square: "<<Area::calculateSquareArea(square)<<endl;
            break;

        case 2:
            Triangle trianle;
            cout<<"Enter the basde of the triangle: ";
            cin>>value1;
            triangle.setBase(value1);
            cout<<"Enter the height of the triangle: ";
            cin>>value2;
            triangle.setHeight(value2)
            cout<<"Area of the triangle: "<<Area::calculateTriangleArea(triangle)<<endl;
            break;

         case 3:
            Circle circle;
            cout<<"Enter the readius o the circle: ";
            cin>>value1;
             circle.setRadius(value1);
             cout<<"Areanof the circle: "<<Area::calculateCircleArea(circle)<<endl;
             break;

         case 4:
             cout<<"Exiting program... "<<endl;
             break;
             default:
             cout<<"Invalid choice! please enter again. "<<endl;


        }
    }
    while (choice != 4);
    return 0;
}
