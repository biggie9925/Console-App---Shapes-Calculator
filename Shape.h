#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Shapes {

protected:

    //square Area
    double calculateArea(double side)
    {
        return side * side;
    }

    //rectangle Area
    double calculateArea(double height, double width)
    {
        return height * width;
    }

    //triangle Area
    double calculateArea(double side1, double side2, double side3)
    {
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        return area;
    }

    //circle Area
    float cauclateArea(float radius)
    {
        return 3.142 * radius * radius;
    }

};

class Square : public Shapes {
public:
    void draw();

private:

    double calculatePerimeter(double side1) {
        double perimeter;
        perimeter = side1 * 4;
        return perimeter;
    }
};

class Rectangle : protected Shapes {
public:
    void draw();

private:

    double calculatePerimeter(double side1, double side2) {
        double perimeter;
        perimeter = 2 * (side1 + side2);
        return perimeter;
    }
};

class Triangle : protected Shapes {
public:
    void draw();

private:

    double calculatePerimeter(double side1, double side2, double side3) {
        double perimeter;
        perimeter = side1 + side2 + side3;
        return perimeter;
    }
};

class Circle : protected Shapes {
public:
    void draw();

private:

    double calculatePerimeter(double radius, int unusedvar) {
        double perimeter;
        perimeter = 2 * 3.141 * radius;
        return perimeter;
    }
};