class Shape {
    double area() {
        return 0;
    }
}

class Rectangle extends Shape {
    double length;
    double width;

    double area() {
        return length * width;
    }
}

class Circle extends Shape {
    double radius;

    double area() {
        return 3.14 * radius * radius;
    }
}

public class Rectangles {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        rect.length = 5;
        rect.width = 3;
        System.out.println("Area of the rectangle: " + rect.area());

        Circle circle = new Circle();
        circle.radius = 4;
        System.out.println("Area of the circle: " + circle.area());
    }
}
