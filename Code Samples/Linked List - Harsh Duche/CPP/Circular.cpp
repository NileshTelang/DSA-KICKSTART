#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() : head(nullptr) {}

    // Create operation: Adding a new node to the end
    void addNode(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Read operation: Accessing elements by index
    int getNode(int index) {
        if (head == nullptr) {
            return -1; // List is empty
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
            if (current == head) {
                return -1; // Index out of bounds
            }
        }
        return current->data;
    }

    // Update operation: Modifying an element by index
    void updateNode(int index, int data) {
        if (head == nullptr) {
            return; // List is empty
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
            if (current == head) {
                return; // Index out of bounds
            }
        }
        current->data = data;
    }

    // Delete operation: Removing a node by index (without additional data structures)
    void deleteNode(int index) {
        if (head == nullptr) {
            return; // List is empty
        }
        Node* current = head;
        Node* prev = nullptr;
        for (int i = 0; i < index; i++) {
            prev = current;
            current = current->next;
            if (current == head) {
                return; // Index out of bounds
            }
        }
        if (current == head) {
            // Removing the head node
            if (head->next == head) {
                head = nullptr;
            } else {
                prev = head;
                while (prev->next != head) {
                    prev = prev->next;
                }
                head = head->next;
                prev->next = head;
            }
        } else {
            prev->next = current->next;
        }
        delete current;
    }

    // isEmpty operation
    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    CircularLinkedList list;

    // Create operation
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);

    // Read operation
    std::cout << "Element at index 1: " << list.getNode(1) << std::endl;

    // Update operation
    list.updateNode(1, 4);

    // Delete operation
    list.deleteNode(1);

    // isEmpty operation
    std::cout << "Is the list empty? " << list.isEmpty() << std::endl;

    return 0;
}
