# Push Swap Algorithm Documentation

## Overview

The Push Swap algorithm is designed to sort a list of integers using only two stacks (Stack A and Stack B) and a limited set of operations. The goal is to sort the integers in ascending order with the fewest operations possible. The operations allowed are:

- `sa`: Swap the first two elements of Stack A.
- `sb`: Swap the first two elements of Stack B.
- `ss`: Perform both `sa` and `sb` at the same time.
- `pa`: Push the top element of Stack B to Stack A.
- `pb`: Push the top element of Stack A to Stack B.
- `ra`: Rotate Stack A (move the top element to the bottom).
- `rb`: Rotate Stack B (move the top element to the bottom).
- `rr`: Perform both `ra` and `rb` at the same time.
- `rra`: Reverse rotate Stack A (move the bottom element to the top).
- `rrb`: Reverse rotate Stack B (move the bottom element to the top).
- `rrr`: Perform both `rra` and `rrb` at the same time.

## Approach

The algorithm follows a strategy to sort the elements from Stack A by progressively moving elements into Stack B and performing necessary operations to ensure the list in Stack A becomes sorted.

### Key Concepts
- **Stack A**: Initially contains the unsorted list of integers.
- **Stack B**: Used temporarily to store elements while Stack A is being sorted.
- **Operations**: Only the operations listed above are allowed, and the goal is to minimize their usage.

In this implementation, both **Stack A** and **Stack B** are represented using a **singular list** (a single linked list). Each stack is essentially a linked list where each node points to the next. Operations like pushing and popping are performed at the head of the list, simplifying the handling of elements in the stacks.

### Process
1. **Move the smallest element to Stack B**: Identify the smallest element in Stack A and rotate the stack until it is at the top. Then, push it to Stack B.
2. **Repeat the process for the next smallest elements**: Continue identifying the smallest elements, rotating Stack A, and pushing the elements to Stack B until all elements are moved to Stack B.
3. **Sort Stack B**: Once Stack B is filled with elements, perform the necessary operations to push them back to Stack A in ascending order. Stack A will be sorted at the end of this step.
4. **Return sorted list**: The integers are now sorted in Stack A, and Stack B will be empty.

## Example: Sorting `[5, 2, 9, 1, 3]`

**Initial State**:
- Stack A: `[5, 2, 9, 1, 3]`
- Stack B: `[]`

### Process:
1. **Move smallest element to Stack B**:
   - Rotate Stack A until the smallest element (1) is at the top, then push it to Stack B.
   - New State: 
     - Stack A: `[2, 9, 5, 3]`
     - Stack B: `[1]`
   
2. **Move the next smallest element to Stack B**:
   - Rotate Stack A to bring the next smallest element (2) to the top and push it to Stack B.
   - New State: 
     - Stack A: `[5, 3, 9]`
     - Stack B: `[1, 2]`
   
3. **Continue this process**:
   - Keep moving elements from Stack A to Stack B in this manner until all elements are moved to Stack B.
   
4. **Sort Stack B and move elements back to Stack A**:
   - After Stack B contains all the elements, perform operations like `ra` and `rb` to rotate them into sorted order.
   
### Final State:
- Stack A: `[1, 2, 3, 5, 9]` (sorted)
- Stack B: `[]` (empty)

## Conclusion

The Push Swap algorithm efficiently sorts integers using a minimal number of operations by cleverly utilizing two stacks and a limited set of actions. The key to a successful implementation is choosing the right elements to move between the stacks, applying rotations and swaps intelligently, and minimizing the number of moves required to reach a sorted list. By using a **singular list** for the implementation of Stack A and Stack B, the algorithm simplifies stack operations like pushing and popping while ensuring an efficient solution to the problem.
