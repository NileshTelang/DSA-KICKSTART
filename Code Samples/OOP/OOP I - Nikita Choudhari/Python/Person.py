# Inheritance
class Animal:
    def eat(self):
        print("Animal is eating.")

class Dog(Animal):
    def bark(self):
        print("Dog is barking.")

dog = Dog()
dog.eat()  # Inherited from Animal
dog.bark() # Defined in Dog

# Encapsulation
class Person:
    def __init__(self):
        self.__name = ""

    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

person = Person()
person.set_name("John")
print("Person's name is", person.get_name())
