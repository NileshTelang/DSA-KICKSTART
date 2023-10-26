public class Student {

    // by default public
    String name;
    int age;
    int rollNumber;

    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age + ", Roll Number: " + rollNumber);
    }

    public static void main(String[] args) {
        Student student = new Student();
        student.name = "Nikita Choudhari";
        student.age = 20;
        student.rollNumber = 2270;

        student.displayInfo();
    }
}
