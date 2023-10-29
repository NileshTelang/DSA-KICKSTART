#include <iostream>
using namespace std;

class gdsc_member {
    public:
        string name;
        gdsc_member(string name) {
            this->name = name;
        }
        void introduce() {
            cout << "My name is " << this->name << " & I'm a GDSC member" << endl;
        }
};

class dev_team : public gdsc_member {
    public:
        string domain;
        dev_team(string name, string domain) : gdsc_member(name) {
            this->domain = domain;
        }
        void introduce() {
            cout << "My name is " << this->name << " & I'm a development team member. My domain is " << this->domain << endl;
        }
};

int main() {
    gdsc_member member1("Harsh");
    dev_team dev1("Harsh", "AI/ML");

    member1.introduce();
    dev1.introduce();

    return 0;
}
