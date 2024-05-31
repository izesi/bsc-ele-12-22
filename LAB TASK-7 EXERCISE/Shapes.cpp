#include "Shapes.h"

namespace Shapes{
    
    Square::Square() : sideLength(0.0){}

    Square::Square(float side) : sideLength(side){}

    void Square::setSideLength(float side){
        sideLength = side;
    }
    float Square::getSideLength() const{
        return sideLength;
    }
    Square::~Square(){}

    //Triangle class implementation
    Triangle::Triangle() : base(0.0), height(0.0){}
    Triangle::Triangle(float b, float h) : base(b), height(h){}
    void Triangle::setBase(float b){
        base = b;
    }
    void Triangle::setHeight(float h){
        height = h;
    }
    float Triangle::getHeight() const {
        return height;
    }
    Triangle::~Triangle(){}

        //circle implementation
        Circle::Circle() : radius(0.0){}
        Circle::Circle(float r) : radius(r){}
        void Circle::setRadius(float r){
            radius = r;
        }
        float Circle::getRadius() const {
            return radius;
        }
        Circle::~Circle(){}

        //area class implementation
        float Area::calculateSquareArea(const Square& square){
            return square.getSideLength() * square.getSideLength();
        }
        float Area::calculateTriangleArea(const Triangle& triangle){
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }
        float Area::calculateCircleArea(const Circle& circle){
            return 3.14159 * circle.getRadius() * circle.getRadius();
        }

    
}