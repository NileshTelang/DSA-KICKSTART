class Animal:
    def speak(self):
        print("The animal speaks.")


class Dog(Animal):
    def speak(self):
        print("The dog barks.")


class Cat(Animal):
    def speak(self):
        print("The cat meows.")


if __name__ == "__main__":
    animal = Animal()
    animal.speak()

    dog = Dog()
    dog.speak()

    cat = Cat()
    cat.speak()
