class CustomStack:
    def __init__(self, size):
        self.max_size = size
        self.stack_array = [None] * size
        self.top = -1

    def push(self, item):
        if self.is_full():
            print(f"Stack is full. Cannot push item: {item}")
            return
        self.top += 1
        self.stack_array[self.top] = item

    def pop(self):
        if self.is_empty():
            print("Stack is empty. Cannot pop an item.")
            return None
        popped_item = self.stack_array[self.top]
        self.top -= 1
        return popped_item

    def peek(self):
        if self.is_empty():
            print("Stack is empty. Cannot peek.")
            return None
        return self.stack_array[self.top]

    def is_empty(self):
        return self.top == -1

    def is_full(self):
        return self.top == self.max_size - 1

    def size(self):
        return self.top + 1

stack = CustomStack(5)

stack.push(1)
stack.push(2)
stack.push(3)

print("Popped:", stack.pop())
print("Peek:", stack.peek())
print("Is empty?", stack.is_empty())
