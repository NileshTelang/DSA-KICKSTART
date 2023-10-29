import java.util.Arrays;

public class ArrayCRUDExample {
    public static void main(String[] args) {
        // Create an array of integers
        int[] numbers = {1, 2, 3, 4, 5};
        
        // Create operation: Adding an element at the end of the array
        int[] newNumbers = Arrays.copyOf(numbers, numbers.length + 1);
        newNumbers[newNumbers.length - 1] = 6;

        // Read operation: Accessing elements by index
        int element = numbers[2];

        // Update operation: Modifying an element by index
        numbers[1] = 7;

        // Delete operation: Removing an element by index (without additional data structures)
        int indexToDelete = 3;
        for (int i = indexToDelete; i < numbers.length - 1; i++) {
            numbers[i] = numbers[i + 1];
        }
        numbers = Arrays.copyOf(numbers, numbers.length - 1);

        // Display the arrays
        System.out.println("Original Array: " + Arrays.toString(numbers));
        System.out.println("Updated Array: " + Arrays.toString(newNumbers));
    }
}
