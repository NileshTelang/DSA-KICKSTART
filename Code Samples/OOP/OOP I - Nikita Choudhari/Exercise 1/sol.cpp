#include <iostream>
using namespace std;

class Rectangle {
   public:
    double length;
    double width;

    double area() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;
    myRectangle.length = 5;
    myRectangle.width = 3;

    cout << "Area of the rectangle: " << myRectangle.area() << endl;

    return 0;
}
