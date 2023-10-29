#include <iostream>
#define MAX_SIZE 1000

class Stack {
    int top;
public:
    int arr[MAX_SIZE];

    Stack() { top = -1; }

    bool isEmpty();
    bool isFull();
    void push(int x);
    void pop();
    int peek();
};

bool Stack::isEmpty() {
    return (top == -1);
}

bool Stack::isFull() {
    return (top == MAX_SIZE - 1);
}

void Stack::push(int x) {
    if (isFull()) {
        std::cout << "Stack Overflow\n";
    } else {

        arr[++top] = x; 
    }
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow\n";
    } else {
        --top;
    }
}

int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is Empty\n";
        return -1;
    }
    return arr[top];
}

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << stack.peek() << "\n"; // 30
    stack.pop();
    std::cout << stack.peek() << "\n";
    return 0;
}


