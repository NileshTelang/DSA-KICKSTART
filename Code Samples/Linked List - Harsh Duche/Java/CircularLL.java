class CircularNode {
    int data;
    CircularNode next;

    CircularNode(int data) {
        this.data = data;
    }
}

class CircularLinkedList {
    CircularNode head;

    // Create operation: Adding a new node to the end
    public void addNode(int data) {
        CircularNode newNode = new CircularNode(data);
        if (head == null) {
            head = newNode;
            head.next = head;
        } else {
            CircularNode current = head;
            while (current.next != head) {
                current = current.next;
            }
            current.next = newNode;
            newNode.next = head;
        }
    }

    // Read operation: Accessing elements by index
    public int getNode(int index) {
        if (head == null) {
            return -1; // List is empty
        }
        CircularNode current = head;
        for (int i = 0; i < index; i++) {
            current = current.next;
            if (current == head) {
                return -1; // Index out of bounds
            }
        }
        return current.data;
    }

    // Update operation: Modifying an element by index
    public void updateNode(int index, int data) {
        if (head == null) {
            return; // List is empty
        }
        CircularNode current = head;
        for (int i = 0; i < index; i++) {
            current = current.next;
            if (current == head) {
                return; // Index out of bounds
            }
        }
        current.data = data;
    }

    // Delete operation: Removing a node by index (without additional data structures)
    public void deleteNode(int index) {
        if (head == null) {
            return; // List is empty
        }
        CircularNode current = head;
        CircularNode prev = null;
        for (int i = 0; i < index; i++) {
            prev = current;
            current = current.next;
            if (current == head) {
                return; // Index out of bounds
            }
        }
        if (current == head) {
            // Removing the head node
            if (head.next == head) {
                head = null;
            } else {
                prev = head;
                while (prev.next != head) {
                    prev = prev.next;
                }
                head = head.next;
                prev.next = head;
            }
        } else {
            prev.next = current.next;
        }
    }

    // isEmpty operation
    public boolean isEmpty() {
        return head == null;
    }
}

public class CircularLL {
    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();

        // Create operation
        list.addNode(1);
        list.addNode(2);
        list.addNode(3);

        // Read operation
        System.out.println("Element at index 1: " + list.getNode(1));

        // Update operation
        list.updateNode(1, 4);

        // Delete operation
        list.deleteNode(1);

        // isEmpty operation
        System.out.println("Is the list empty? " + list.isEmpty());
    }
}
