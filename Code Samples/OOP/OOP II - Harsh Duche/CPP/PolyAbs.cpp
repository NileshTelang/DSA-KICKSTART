#include <iostream>

// Abstraction
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

// Polymorphism
int main() {
    Shape* circle = new Circle();
    Shape* rectangle = new Rectangle();

    circle->draw();    // Calls Circle's draw method
    rectangle->draw(); // Calls Rectangle's draw method

    delete circle;
    delete rectangle;

    return 0;
}
