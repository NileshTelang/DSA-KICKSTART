class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width


my_rectangle = Rectangle(5, 3)
print(f"Area of the rectangle: {my_rectangle.area()}")
