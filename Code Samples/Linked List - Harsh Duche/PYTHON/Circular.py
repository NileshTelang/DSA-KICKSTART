class CircularNode:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = None

    # Create operation: Adding a new node to the end
    def add_node(self, data):
        new_node = CircularNode(data)
        if self.head is None:
            self.head = new_node
            new_node.next = self.head
        else:
            current = self.head
            while current.next != self.head:
                current = current.next
            current.next = new_node
            new_node.next = self.head

    # Read operation: Accessing elements by index
    def get_node(self, index):
        if self.head is None:
            return -1  # List is empty
        current = self.head
        for i in range(index):
            current = current.next
            if current == self.head:
                return -1  # Index out of bounds
        return current.data

    # Update operation: Modifying an element by index
    def update_node(self, index, data):
        if self.head is None:
            return  # List is empty
        current = self.head
        for i in range(index):
            current = current.next
            if current == self.head:
                return  # Index out of bounds
        current.data = data

    # Delete operation: Removing a node by index (without additional data structures)
    def delete_node(self, index):
        if self.head is None:
            return  # List is empty
        current = self.head
        prev = None
        for i in range(index):
            prev = current
            current = current.next
            if current == self.head:
                return  # Index out of bounds
        if current == self.head:
            # Removing the head node
            if self.head.next == self.head:
                self.head = None
            else:
                prev = self.head
                while prev.next != self.head:
                    prev = prev.next
                self.head = self.head.next
                prev.next = self.head
        else:
            prev.next = current.next

    # isEmpty operation
    def is_empty(self):
        return self.head is None

# Example usage
circular_linked_list = CircularLinkedList()

# Create operation
circular_linked_list.add_node(1)
circular_linked_list.add_node(2)
circular_linked_list.add_node(3)

# Read operation
print("Element at index 1:", circular_linked_list.get_node(1))

# Update operation
circular_linked_list.update_node(1, 4)

# Delete operation
circular_linked_list.delete_node(1)

# isEmpty operation
print("Is the list empty?", circular_linked_list.is_empty())
