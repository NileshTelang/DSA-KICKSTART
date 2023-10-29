# Create an array of integers
numbers = [1, 2, 3, 4, 5]

# Create operation: Adding an element at the end of the array
new_numbers = numbers + [6]

# Read operation: Accessing elements by index
element = numbers[2]

# Update operation: Modifying an element by index
numbers[1] = 7

# Delete operation: Removing an element by index (without additional data structures)
index_to_delete = 3
numbers.pop(index_to_delete)

# Display the arrays
print("Original Array:", numbers)
print("Updated Array:", new_numbers)
