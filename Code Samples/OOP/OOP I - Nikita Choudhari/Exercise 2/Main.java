class Animal {
    void speak() {
        System.out.println("The animal speaks.");
    }
}

class Dog extends Animal {
    void speak() {
        System.out.println("The dog barks.");
    }
}

class Cat extends Animal {
    void speak() {
        System.out.println("The cat meows.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.speak();

        Dog dog = new Dog();
        dog.speak();

        Cat cat = new Cat();
        cat.speak();
    }
}
