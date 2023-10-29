class Student:
    def __init__(self, name, age, roll_number):
        self.name = name
        self.age = age
        # self.__age = age
        self.roll_number = roll_number

    def display_info(self):
        print(
            f"Name: {self.name}, Age: {self.age}, Roll Number: {self.roll_number}")


student = Student("Neha Choudhari", 20, 2270)
student.display_info()
