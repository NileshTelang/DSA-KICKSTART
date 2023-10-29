class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return None

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return None

    def is_empty(self):
        return len(self.items) == 0

stack = Stack()

# Push elements onto the stack
stack.push(1)
stack.push(2)
stack.push(3)

# Pop elements from the stack
popped_element = stack.pop()
print("Popped:", popped_element)

# Peek at the top element without removing it
top_element = stack.peek()
print("Top:", top_element)

# Check if the stack is empty
is_empty = stack.is_empty()
print("Is the stack empty?", is_empty)
