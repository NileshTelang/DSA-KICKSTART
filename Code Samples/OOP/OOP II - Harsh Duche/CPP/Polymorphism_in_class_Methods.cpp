#include <iostream>
using namespace std;

class dev_team {
  string name;
  string dept;

public:
  dev_team(string name, string dept) : name(name), dept(dept) {}

  void introduce() {
      cout << "I am Tech Lead " << this->name << " from " << this->dept << endl;
  }

  void skills() {
      cout << "We can code anything and we are the best\n" << endl;
  }
};

class design_team {
  string name;
  string dept;

public:
  design_team(string name, string dept) : name(name), dept(dept) {}

  void introduce() {
      cout << "I am Design Lead " << this->name << " from " << this->dept << endl;
  }

  void skills() {
      cout << "We can design cool digital content" << endl;
  }
};

int main() {
  dev_team dev1("Nilesh Telang", "Computer");
  design_team designer1("Anshusingh Rajput", "ENTC");

  dev1.introduce();
  dev1.skills();

  designer1.introduce();
  designer1.skills();

  return 0;
}
