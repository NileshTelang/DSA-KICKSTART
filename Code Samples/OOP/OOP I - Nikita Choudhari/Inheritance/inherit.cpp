#include <iostream>
using namespace std;

// Base class
class Shape {
   public:
    double area() {
        return 0;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
   public:
    double length;
    double width;

    double area() {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
   public:
    double radius;

    double area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;
    cout << "Area of the rectangle: " << rect.area() << endl;

    Circle circle;
    circle.radius = 4;
    cout << "Area of the circle: " << circle.area() << endl;

    return 0;
}
