class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    # Create operation: Adding a new node to the end
    def add_node(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    # Read operation: Accessing elements by index
    def get_node(self, index):
        current = self.head
        for i in range(index):
            if current is None:
                return -1  # Index out of bounds
            current = current.next
        return current.data if current else -1  # Node not found

    # Update operation: Modifying an element by index
    def update_node(self, index, data):
        current = self.head
        for i in range(index):
            if current is None:
                return
            current = current.next
        if current:
            current.data = data

    # Delete operation: Removing a node by index (without additional data structures)
    def delete_node(self, index):
        if index == 0:
            self.head = self.head.next
        else:
            current = self.head
            for i in range(index - 1):
                if current is None:
                    return
                current = current.next
            if current and current.next:
                current.next = current.next.next

    # isEmpty operation
    def is_empty(self):
        return self.head is None

# Example usage
linked_list = SinglyLinkedList()

# Create operation
linked_list.add_node(1)
linked_list.add_node(2)
linked_list.add_node(3)

# Read operation
print("Element at index 1:", linked_list.get_node(1))

# Update operation
linked_list.update_node(1, 4)

# Delete operation
linked_list.delete_node(1)

# isEmpty operation
print("Is the list empty?", linked_list.is_empty())
