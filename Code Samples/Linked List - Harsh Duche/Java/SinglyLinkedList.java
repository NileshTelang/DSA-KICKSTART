
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
    }
}

class SinglyLL {
    Node head;

    // Create operation: Adding a new node to the end
    public void addNode(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
        }
    }

    // Read operation: Accessing elements by index
    public int getNode(int index) {
        Node current = head;
        for (int i = 0; i < index && current != null; i++) {
            current = current.next;
        }
        if (current != null) {
            return current.data;
        } else {
            return -1; // Index out of bounds
        }
    }

    // Update operation: Modifying an element by index
    public void updateNode(int index, int data) {
        Node current = head;
        for (int i = 0; i < index && current != null; i++) {
            current = current.next;
        }
        if (current != null) {
            current.data = data;
        }
    }

    // Delete operation: Removing a node by index (without additional data structures)
    public void deleteNode(int index) {
        if (index == 0) {
            head = head.next;
        } else {
            Node current = head;
            for (int i = 0; i < index - 1 && current != null; i++) {
                current = current.next;
            }
            if (current != null && current.next != null) {
                current.next = current.next.next;
            }
        }
    }

    // isEmpty operation
    public boolean isEmpty() {
        return head == null;
    }
}

public class SinglyLinkedList {
    public static void main(String[] args) {
        SinglyLL list = new SinglyLL();

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
