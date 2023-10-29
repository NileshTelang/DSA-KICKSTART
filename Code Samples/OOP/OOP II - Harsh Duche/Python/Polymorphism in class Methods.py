class dev_team:
    def __init__(self, name, dept):
        self.name = name
        self.dept = dept
    
    def introduce(self):
        print(f"I am Tech Lead {self.name} from {self.dept}")

    def skills(self):
        print("We can code anything and we are the best\n")

class design_team:
    def __init__(self, name, dept):
        self.name = name
        self.dept = dept
    
    def introduce(self):
        print(f"I am Design Lead {self.name} from {self.dept}")

    def skills(self):
        print("We can design cool digital content")


dev1 = dev_team("Nilesh Telang", "Computer")
designer1 = design_team("Anshusingh Rajput", "ENTC")

dev1.introduce()
dev1.skills()

designer1.introduce()
designer1.skills()