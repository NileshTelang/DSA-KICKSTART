public class Rectangle {
    double length;
    double width;

    double area() {
        return length * width;
    }

    public static void main(String[] args) {
        Rectangle myRectangle = new Rectangle();
        myRectangle.length = 5;
        myRectangle.width = 3;

        System.out.println("Area of the rectangle: " + myRectangle.area());
    }
}
