# Abstraction
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass

class Circle(Shape):
    def draw(self):
        print("Drawing a circle")

class Rectangle(Shape):
    def draw(self):
        print("Drawing a rectangle")

# Polymorphism
if __name__ == "__main__":
    circle = Circle()
    rectangle = Rectangle()

    circle.draw()    # Calls Circle's draw method
    rectangle.draw() # Calls Rectangle's draw method
