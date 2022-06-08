#include <iostream>
#include "Shape.h";
using namespace std;

int main()
{
    bool loop = true;
    while (loop) {

        cout << "*********************************\n";
        cout << "\tShapes Calculator\n";
        cout << "*********************************\n\n";
        cout << "\t1. Square\n";
        cout << "\t2. Rectangle\n";
        cout << "\t3. Triangle\n";
        cout << "\t4. Circle\n";
        cout << "\t5. Exit\n\n";
        cout << "Please choose your option: ";
        int option;
        cin >> option;

        if (option == 1) {
            Square square;
            square.draw();
            continue;
        }

        else if (option == 2) {
            Rectangle rectangle;
            rectangle.draw();
            continue;
        }

        else if (option == 3) {
            Triangle triangle;
            triangle.draw();
            continue;
        }

        else if (option == 4) {
            Circle circle;
            circle.draw();
            continue;
        }

        else if (option == 5) {
            cout << "\nExiting Application...\n";
            return 0;
        }

        else {
            cout << "Incorrect input, please try again\n";
        }
    }
}

