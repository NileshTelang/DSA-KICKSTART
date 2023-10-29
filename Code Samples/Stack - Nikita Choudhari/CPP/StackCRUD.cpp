#include <iostream>
#include <stack>

int main() {
    // Create a stack of integers
    std::stack<int> stack;

    // Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Pop elements from the stack
    int poppedElement = stack.top();
    stack.pop();
    std::cout << "Popped: " << poppedElement << std::endl;

    // Peek at the top element without removing it
    int topElement = stack.top();
    std::cout << "Top: " << topElement << std::endl;

    // Check if the stack is empty
    bool isEmpty = stack.empty();
    std::cout << "Is the stack empty? " << isEmpty << std::endl;

    return 0;
}
