MAX_SIZE = 1000

class Stack:
    def __init__(self):
        self.top = -1
        self.arr = [0] * MAX_SIZE

    def isEmpty(self):
        return self.top == -1

    def isFull(self):
        return self.top == MAX_SIZE - 1

    def push(self, x):
        if self.isFull():
            print("Stack Overflow")
        else:
            self.top += 1
            self.arr[self.top] = x

    def pop(self):
        if self.isEmpty():
            print("Stack Underflow")
        else:
            self.top -= 1

    def peek(self):
        if self.isEmpty():
            print("Stack is Empty")
            return -1
        return self.arr[self.top]


stack = Stack()
stack.push(10)
stack.push(20)
stack.push(30)
print(stack.peek())
stack.pop()
print(stack.peek())
