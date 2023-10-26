#include <iostream>
#define SIZE 10
using namespace std;

class Deque {
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        if(front == -1)
            return true;
        return false;
    }

    bool isFull() {
        if((rear + 1) % SIZE == front)
            return true;
        return false;
    }

    void insertFront(int data) {
        if (isFull()) {
            cout << "Deque is full" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = SIZE - 1;
        } else {
            front--;
        }
        arr[front] = data;
    }

    void insertRear(int data) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at the rear." << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = data;
    }

    int deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the front." << endl;
            return -1;
        }

        int data = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }

        return data;
    }

    int deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the rear." << endl;
            return -1;
        }

        int data = arr[rear];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = SIZE - 1;
        } else {
            rear--;
        }

        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }

        int i = front;

        cout << "\nElements in dequeue -> ";
        for(int i=front; i!=rear; i=(i+1)%SIZE){
            cout << arr[i] << " ";
        }
        cout << arr[rear];
    }
};

int main() {
    Deque deque;

    deque.insertRear(1);
    deque.insertRear(2);
    deque.insertFront(0);
    deque.insertFront(-1);
    deque.deleteFront();
    deque.insertFront(-1);
    deque.display();
    return 0;
}
