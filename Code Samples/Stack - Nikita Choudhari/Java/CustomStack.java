public class CustomStack<T> {
    private int maxSize;
    private Object[] stackArray;
    private int top;

    public CustomStack(int size) {
        this.maxSize = size;
        this.stackArray = new Object[size];
        this.top = -1;
    }

    public void push(T item) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push item: " + item);
            return;
        }
        stackArray[++top] = item;
    }

    public T pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop an item.");
            return null;
        }
        return (T) stackArray[top--];
    }

    public T peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot peek.");
            return null;
        }
        return (T) stackArray[top];
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == maxSize - 1;
    }

    public int size() {
        return top + 1;
    }

    public static void main(String[] args) {
        CustomStack<Integer> stack = new CustomStack<>(5);

        stack.push(1);
        stack.push(2);
        stack.push(3);

        System.out.println("Popped: " + stack.pop());
        System.out.println("Peek: " + stack.peek());
        System.out.println("Is empty? " + stack.isEmpty());
    }
}
