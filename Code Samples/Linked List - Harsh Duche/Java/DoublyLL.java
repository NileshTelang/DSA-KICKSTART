class DoublyNode {
    int data;
    DoublyNode next;
    DoublyNode prev;

    DoublyNode(int data) {
        this.data = data;
    }
}

class DoublyLinkedList {
    DoublyNode head;

    // Create operation: Adding a new node to the end
    public void addNode(int data) {
        DoublyNode newNode = new DoublyNode(data);
        if (head == null) {
            head = newNode;
        } else {
            DoublyNode current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
            newNode.prev = current;
        }
    }

    // Read operation: Accessing elements by index
    public int getNode(int index) {
        DoublyNode current = head;
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
        DoublyNode current = head;
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
            head.prev = null;
        } else {
            DoublyNode current = head;
            for (int i = 0; i < index - 1 && current != null; i++) {
                current = current.next;
            }
            if (current != null && current.next != null) {
                current.next = current.next.next;
                if (current.next != null) {
                    current.next.prev = current;
                }
            }
        }
    }

    // isEmpty operation
    public boolean isEmpty() {
        return head == null;
    }
}

public class DoublyLL {
    public static void main(String[] args) {
        DoublyLinkedList list = new DoublyLinkedList();

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
