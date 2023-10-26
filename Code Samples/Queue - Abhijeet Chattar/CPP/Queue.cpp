#include <iostream>
#define size 5
using namespace std;

class queue{
    public:
    int arr[size], front, rear;
    
    queue(){
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
        if(rear == size -1){
            return true;
        }
        return false;
    }

    void enqueue(int data){
        if(isFull()){
            cout << "Queue if full" << endl;
            return;
        }
        else{
            if(front == -1){
                front = 0;
            }
        }
        rear++;
        arr[rear] = data;
        cout << "Inserted " << data << endl;
    }

    void dequeue(){
        int data;
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        else{
            data = arr[front];
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
        }
        cout << "Deleted " << data << endl;
    }

    void display(){
        cout << "\nElements in queue -> ";
        for(int i=front; i<=rear; i++){
            cout << arr[i] << " ";
        }
    }
};

int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(20);
    q.enqueue(8);
    q.enqueue(14);
    q.enqueue(26);
    q.display();
    return 0;
}