# Push Swap Algorithm Documentation

## Overview

The Push Swap algorithm sorts a list of numbers using only two stacks, Stack A and Stack B, with a limited set of operations. The aim is to sort the numbers in ascending order using the fewest operations possible. The following operations are permitted:

- `sa`: Swap the first two elements of Stack A.
- `sb`: Swap the first two elements of Stack B.
- `ss`: Perform `sa` and `sb` simultaneously.
- `pa`: Push the top element of Stack B to Stack A.
- `pb`: Push the top element of Stack A to Stack B.
- `ra`: Rotate Stack A (the first element becomes the last one).
- `rb`: Rotate Stack B (the first element becomes the last one).
- `rr`: Perform `ra` and `rb` simultaneously.
- `rra`: Reverse rotate Stack A, moving the bottom element to the top.
- `rrb`: Reverse rotate Stack B, moving the bottom element to the top.
- `rrr`: Perform `rra` and `rrb` simultaneously.

## Approach

The algorithm sorts elements in Stack A by iteratively transferring them into Stack B and then carrying out operations to sort the list in Stack A.

### Key Concepts
- **Stack A**: Initially contains the unsorted list of numbers.
- **Stack B**: A temporary repository used to hold elements as Stack A is sorted.
- **Operations**: Only the above-mentioned operations are permitted, and the goal is to minimize their usage.

In the following implementation, both **Stack A** and **Stack B** are implemented as **single linked lists**. Each stack is a linked list where each node points to the next, and operations like push and pop are performed at the head of the list for simplicity. Here's how it works:

1. **Move the smallest element to Stack B**: Find the smallest number in Stack A and perform the rotation of the stack to bring it to the top. Then, push it into Stack B.
2. **Repeat for the next smallest elements**: Continue finding the smallest element, performing rotations in Stack A, and pushing elements to Stack B until all elements are in Stack B.
3. **Sort Stack B**: Once Stack B is filled, perform the required operations to push the elements back to Stack A in ascending order. Stack A will be sorted at the end.
4. **Return the sorted list**: After sorting, Stack A will contain the sorted numbers, and Stack B will be empty.

## Example: Sorting `[5, 2, 9, 1, 3]`

**Initial State**:
- Stack A: `[5, 2, 9, 1, 3]`
- Stack B: `[]`

### Process:
1. **Move smallest number to Stack B**:
   - Rotate Stack A until the smallest number, 1, is at the top; then push it to Stack B.
   - New State: 
     - Stack A: `[2, 9, 5, 3]`
     - Stack B: `[1]`
   
2. **Move the next smallest number to Stack B**:
   - Rotate Stack A to bring the next smallest number, 2, to the top and push it to Stack B.
   - New State:
     - Stack A: `[5, 3, 9]`
     - Stack B: `[1, 2]`
   
3. **Repeat this process**:
   - Continue repeating this process for all elements, moving the smallest elements to Stack B.

4. **Sort Stack B and move numbers back to Stack A**:
   - Once all numbers are moved to Stack B, perform rotations and operations to push them back to Stack A in the correct order.
   - Final State:
     - Stack A: `[1, 2, 3, 5, 9]` (Sorted)
     - Stack B: `[]` (Empty)

## Conclusion

The Push Swap algorithm uses just two stacks and a limited set of operations to efficiently sort numbers in ascending order. The key to a successful implementation is choosing the right elements to move between the stacks, applying rotations and swaps intelligently, and minimizing the number of moves required to achieve a sorted list. The use of **single linked lists** for Stack A and Stack B simplifies stack operations such as pushing and popping, ensuring that the algorithm remains efficient.
