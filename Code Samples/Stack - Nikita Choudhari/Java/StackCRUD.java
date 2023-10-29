import java.util.Stack;

public class StackCRUD  {
    public static void main(String[] args) {
        // Create a stack of integers
        Stack<Integer> stack = new Stack<>();

        // Push elements onto the stack
        stack.push(1);
        stack.push(2);
        stack.push(3);

        // Pop elements from the stack
        int poppedElement = stack.pop();
        System.out.println("Popped: " + poppedElement);

        // Peek at the top element without removing it
        int topElement = stack.peek();
        System.out.println("Top: " + topElement);

        // Check if the stack is empty
        boolean isEmpty = stack.isEmpty();
        System.out.println("Is the stack empty? " + isEmpty);
    }
}
