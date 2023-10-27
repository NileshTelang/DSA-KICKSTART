class gdsc_member:
    def __init__(self, name):
        self.name = name

    def introduce(self):
        print(f"My name is {self.name} & I'm a GDSC member")

class dev_team(gdsc_member):
    def __init__(self, name, domain):
        super().__init__(name)
        self.domain = domain

    def introduce(self):
        print(f"My name is {self.name} & I'm a development team member. My domain is {self.domain}")


member1 = gdsc_member("Harsh")
dev1 = dev_team("Harsh","AI/ML")

member1.introduce()
dev1.introduce()