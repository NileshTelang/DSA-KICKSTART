#include <iostream>

class MethodOverloading {
public:
    int sum(int x, int y) {
        return x + y;
    }

    int sum(int x, int y, int z) {
        return x + y + z;
    }

    double sum(double x, double y) {
        return x + y;
    }
};

int main() {
    MethodOverloading s;
    std::cout << s.sum(10, 20) << std::endl;
    std::cout << s.sum(10, 20, 30) << std::endl;
    std::cout << s.sum(10.5, 20.5) << std::endl;
    return 0;
}
