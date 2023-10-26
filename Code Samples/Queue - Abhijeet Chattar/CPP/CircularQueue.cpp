#include <iostream>
#define size 5
using namespace std;

class CircularQueue{
    public:
    int queue[size], front, rear;

    CircularQueue(){
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if((rear+1)%size==front){
            return true;
        }
        return false;
    }

    void enqueue(int data){
        if(isFull()){
            cout << "Queue is full" << endl;
            return;
        }
        else{
            if(front == -1){
                front = 0;
            }
        }
        rear = (rear+1)%size;
        queue[rear] = data;
    }

    void dequeue(){
        int data;
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        else{
            data = queue[front];
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else{
                front = (front+1)%size;
            }
        }
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
        }
        else
            cout << "\nElements in queue -> ";
            for(int i=front; i!=rear;i=(i+1)%size){
                cout << queue[i] << " ";
            }
            cout << queue[rear];
    }
};

int main(){
    CircularQueue q;
    q.enqueue(5);
    q.enqueue(20);
    q.enqueue(8);
    q.enqueue(14);
    q.enqueue(26);
    q.dequeue();
    q.enqueue(26);
    q.display();
    return 0;
}