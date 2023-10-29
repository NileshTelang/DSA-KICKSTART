
class DoublyNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    # Create operation: Adding a new node to the end
    def add_node(self, data):
        new_node = DoublyNode(data)
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node
            new_node.prev = current

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
            if self.head:
                self.head.prev = None
        else:
            current = self.head
            for i in range(index - 1):
                if current is None:
                    return
                current = current.next
            if current and current.next:
                current.next = current.next.next
                if current.next:
                    current.next.prev = current

    # isEmpty operation
    def is_empty(self):
        return self.head is None

# Example usage
doubly_linked_list = DoublyLinkedList()

# Create operation
doubly_linked_list.add_node(1)
doubly_linked_list.add_node(2)
doubly_linked_list.add_node(3)

# Read operation
print("Element at index 1:", doubly_linked_list.get_node(1))

# Update operation
doubly_linked_list.update_node(1, 4)

# Delete operation
doubly_linked_list.delete_node(1)

# isEmpty operation
print("Is the list empty?", doubly_linked_list.is_empty())
