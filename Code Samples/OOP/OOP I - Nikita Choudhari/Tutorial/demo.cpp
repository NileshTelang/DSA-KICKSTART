#include <iostream>
using namespace std;

class Student {
    // by default private

   public:
    string name;
    int age;
    int rollNumber;

    void displayInfo() {
        cout<<"\n";
        cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student, student2;
    student.name = "Nikita Choudhari";
    student.age = 20;
    student.rollNumber = 2270;

    student2.name="Neha";
    student2.displayInfo();

    return 0;
}
