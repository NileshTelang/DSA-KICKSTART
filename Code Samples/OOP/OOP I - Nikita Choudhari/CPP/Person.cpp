#include <iostream>

// Inheritance
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Defined in Dog

    // Encapsulation
    class Person {
    private:
        std::string name;

    public:
        std::string getName() {
            return name;
        }

        void setName(std::string name) {
            this->name = name;
        }
    };

    Person person;
    person.setName("John");
    std::cout << "Person's name is " << person.getName() << std::endl;

    return 0;
}
