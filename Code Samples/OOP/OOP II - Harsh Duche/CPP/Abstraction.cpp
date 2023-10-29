#include <iostream>

class GdscMember {
public:
    virtual void id() = 0;
};

class DevTeam : public GdscMember {
public:
    void id() override {
        std::cout << "My name is Harsh & I'm development team member" << std::endl;
    }
};

int main() {
    DevTeam dev1;
    dev1.id();
    return 0;
}
