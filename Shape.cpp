#include <iostream>
#include "Shape.h";
using namespace std;

void Square::draw() {
    cout << "\n*********************************\n";
    cout << "\tSquare Calculator\n";
    cout << "*********************************\n\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n";
    cout << "* * * * * * * * *\n\n";
    cout << "\t1. Area\n";
    cout << "\t2. Perimeter\n";
    cout << "\t3. Go back to Main Menu\n\n";
    cout << "Please choose your option: ";
    int option;
    cin >> option;
    if (option == 1) {
        double side1;
        cout << "\nPlease enter the length of side 1: ";
        cin >> side1;
        cout << "Square Area is: " << Shapes::calculateArea(side1) << endl;
    }

    else if (option == 2) {
        double side1;
        cout << "\nPlease enter the length of side 1: ";
        cin >> side1;
        cout << "Square Perimeter is: " << calculatePerimeter(side1) << endl;
    }

    else if (option == 3) {

    }

    else {
        cout << "Incorrect Input, Please try again";
    }
    cout << endl;
}

void Rectangle::draw() {
    cout << "\n*********************************\n";
    cout << "\tRectangle Calculator\n";
    cout << "*********************************\n\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * * * *\n\n";
    cout << "\t1. Area\n";
    cout << "\t2. Perimeter\n";
    cout << "\t3. Go back to Main Menu\n\n";
    cout << "Please choose your option: ";
    int option;
    cin >> option;
    if (option == 1) {
        double side1, side2;
        cout << "\nPlease enter Rectangle Length: ";
        cin >> side1;
        cout << "Please enter Rectangle Height: ";
        cin >> side2;
        cout << "Rectangle Area is: " << Shapes::calculateArea(side1, side2) << endl;
    }
    else if (option == 2) {
        double side1, side2;
        cout << "\nPlease enter Rectangle Length: ";
        cin >> side1;
        cout << "Please enter Rectangle Height: ";
        cin >> side2;
        cout << "Rectangle Perimeter is: " << calculatePerimeter(side1, side2) << endl;
    }
    else if (option == 3) {

    }
    else {
        cout << "Incorrect Input, Please try again";
    }
    cout << endl;
}

void Triangle::draw() {
    cout << "\n*********************************\n";
    cout << "\tTriangle Calculator\n";
    cout << "*********************************\n\n";
    cout << "            *\n";
    cout << "           * *\n";
    cout << "          * * *\n";
    cout << "         * * * *\n";
    cout << "        * * * * *\n";
    cout << "       * * * * * *\n";
    cout << "      * * * * * * *\n";
    cout << "     * * * * * * * *\n\n";
    cout << "\t1. Area\n";
    cout << "\t2. Perimeter \n";
    cout << "\t3. Go back to Main Menu\n\n";
    cout << "Please choose your option: ";
    int option;
    cin >> option;
    if (option == 1) {
        double side1, side2, side3;
        cout << "\nPlease enter the length of side 1: ";
        cin >> side1;
        cout << "Please enter the length of side 2: ";
        cin >> side2;
        cout << "Please enter the length of side 3: ";
        cin >> side3;
        cout << "Triangle Area is: " << Shapes::calculateArea(side1, side2, side3) << endl;

    }
    else if (option == 2) {
        double side1, side2, side3;
        cout << "\nPlease enter the length of side 1: ";
        cin >> side1;
        cout << "Please enter the length of side 2: ";
        cin >> side2;
        cout << "Please enter the length of side 3: ";
        cin >> side3;
        cout << "Triangle Perimeter is: " << calculatePerimeter(side1, side2, side3) << endl;
    }
    else if (option == 3) {

    }
    else {
        cout << "Incorrect Input, Please try again";
    }
    cout << endl;
}

void Circle::draw() {
    cout << "\n*********************************\n";
    cout << "\tCircle Calculator\n";
    cout << "*********************************\n\n";
    cout << "        * * * *\n";
    cout << "      *          *\n";
    cout << "    *              *\n";
    cout << "   *                *\n";
    cout << "   *                *\n";
    cout << "    *              *\n";
    cout << "      *          *\n";
    cout << "        * * * *\n\n";
    cout << "\t1. Area\n";
    cout << "\t2. Circumference\n";
    cout << "\t3. Go back to Main Menu\n\n";
    cout << "Please choose your option: ";
    int option;
    cin >> option;
    if (option == 1) {
        float radius;
        cout << "\nPlease enter the Circle Radius: ";
        cin >> radius;
        cout << "Circle Area is: " << Shapes::calculateArea(radius) << endl;
    }
    else if (option == 2) {
        double radius;
        int unusedvar = 0;
        cout << "\nPlease enter the Circle Radius: ";
        cin >> radius;
        cout << "Circle Circumference is: " << calculatePerimeter(radius, unusedvar) << endl;
    }
    else if (option == 3) {

    }
    else {
        cout << "Incorrect Input, Please try again";
    }
    cout << endl;
}