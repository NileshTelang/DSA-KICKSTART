#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    // Create operation: Adding a new node to the end
    void addNode(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    // Read operation: Accessing elements by index
    int getNode(int index) {
        Node* current = head;
        for (int i = 0; i < index && current != nullptr; i++) {
            current = current->next;
        }
        return (current != nullptr) ? current->data : -1; // Index out of bounds
    }

    // Update operation: Modifying an element by index
    void updateNode(int index, int data) {
        Node* current = head;
        for (int i = 0; i < index && current != nullptr; i++) {
            current = current->next;
        }
        if (current != nullptr) {
            current->data = data;
        }
    }

    // Delete operation: Removing a node by index (without additional data structures)
    void deleteNode(int index) {
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
            delete temp;
        } else {
            Node* current = head;
            for (int i = 0; i < index; i++) {
                if (current == nullptr) {
                    return; // Index out of bounds
                }
                current = current->next;
            }
            if (current != nullptr) {
                Node* prevNode = current->prev;
                Node* nextNode = current->next;
                if (prevNode != nullptr) {
                    prevNode->next = nextNode;
                }
                if (nextNode != nullptr) {
                    nextNode->prev = prevNode;
                }
                delete current;
            }
        }
    }

    // isEmpty operation
    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    DoublyLinkedList list;

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
