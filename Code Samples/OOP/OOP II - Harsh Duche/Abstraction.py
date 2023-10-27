# Abstract class = a class which contains one or more abstract methods.
# Abstract method = a method that has a declaration but does not have an implementation.

# prevents a user from creating an object of that class
# + compels a user to override abstract methods in a child class

from abc import ABC, abstractclassmethod

class gdsc_member(ABC):
    @abstractclassmethod
    def id(self):
        pass


class dev_team(gdsc_member):
    def id(self):
        print("My name is Harsh & I'm development team member")

dev1 = dev_team()

dev1.id()