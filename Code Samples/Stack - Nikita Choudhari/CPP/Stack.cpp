#include <iostream>

template <typename T>
class CustomStack {
private:
    int maxSize;
    T* stackArray;
    int top;

public:
    CustomStack(int size) : maxSize(size), top(-1) {
        stackArray = new T[size];
    }

    void push(T item) {
        if (isFull()) {
            std::cout << "Stack is full. Cannot push item: " << item << std::endl;
            return;
        }
        stackArray[++top] = item;
    }

    T pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop an item." << std::endl;
            return T();
        }
        return stackArray[top--];
    }

    T peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return T();
        }
        return stackArray[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == maxSize - 1;
    }

    int size() {
        return top + 1;
    }

    ~CustomStack() {
        delete[] stackArray;
    }
};

int main() {
    CustomStack<int> stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Popped: " << stack.pop() << std::endl;
    std::cout << "Peek: " << stack.peek() << std::endl;
    std::cout << "Is empty? " << stack.isEmpty() << std::endl;

    return 0;
}
