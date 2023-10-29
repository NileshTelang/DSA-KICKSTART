public class Stack {
    final int MAX_SIZE = 1000;
    int top;
    int[] arr = new int[MAX_SIZE];

    Stack() {
        top = -1;
    }

    boolean isEmpty() {
        return (top == -1);
    }

    boolean isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int x) {
        if (isFull()) {
            System.out.println("Stack Overflow");
        } else {
            arr[++top] = x;
        }
    }

    void pop() {
        if (isEmpty()) {
            System.out.println("Stack Underflow");
        } else {
            --top;
        }
    }

    int peek() {
        if (isEmpty()) {
            System.out.println("Stack is Empty");
            return -1;
        }
        return arr[top];
    }

    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println(stack.peek());
        stack.pop();
        System.out.println(stack.peek());
    }
}
