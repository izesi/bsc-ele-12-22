#pragma once
#include "Shapes.h"

namespace shapes{
    class Square{
        private:
        float sideLength;

        public:
        Square();//constructor
        Square(float side);//overloaded constructor

       void setSideLength(float side);// accessor method for side length
       float getSideLength() const;// accessor method for side length

       ~Square();//Destructor

    };
    class Triangle{
        private:
          float base;
          float height;
        public:
        Triangle();// default constructor
        Triangle(float b, float h);//overloaded constructor

        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;

        ~Triangle();//destructor

    };
    class Circle{
        private:
         float radius;

        public:
          Circle();//constructor
          Circle(float r);//overloaded constructor
          
          void setRadius(float r);
          float getRadius() const;
          ~Circle();//destructor
    };
    class Area{
        public:
        static float calculateSquareArea(const Square& square);//calculate square area
        static float calculateTriangleArea(const Triangle& triangle);
        static float calculateCircleArea(const Circle& circle);
    };

    }
