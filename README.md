# C++ Practice Programs

This workspace contains several small C++ programs demonstrating basic data structures and simple algorithmic tasks.

## Files

- `priority_Queue.cpp`
  - Implements a priority queue using an ordered array in descending order.
  - Supports insertion while keeping the array sorted and deletion of the highest priority element.
  - Includes a menu-driven interface for insert, delete, display, and exit.

- `Queue.cpp`
  - Implements a simple queue using a fixed-size array.
  - Supports enqueue, dequeue, get front, and get rear operations.
  - Reads and displays the front and rear elements after enqueueing a list of values.

- `queueFront_Rear.cpp`
  - Duplicate implementation of `Queue.cpp`.
  - Also demonstrates enqueueing values and printing the queue's front and rear elements.

- `Palindrome_stack.cpp`
  - Checks whether a string is a palindrome using a stack-based approach.
  - Pushes characters onto a stack and compares them while popping to verify symmetry.

- `Temp_Dsa.cpp`
  - Converts an array of 10 Celsius temperatures to Fahrenheit.
  - Uses a helper function to perform the conversion and prints the results.

- `Fact.cpp`
  - Computes the factorial for 5 input integers.
  - Handles negative inputs by reporting that factorial is not defined.

## How to compile

Use a C++ compiler such as `g++`.

Example:

```bash
g++ priority_Queue.cpp -o priority_Queue.exe
g++ Queue.cpp -o Queue.exe
g++ queueFront_Rear.cpp -o queueFront_Rear.exe
g++ Palindrome_stack.cpp -o Palindrome_stack.exe
g++ Temp_Dsa.cpp -o Temp_Dsa.exe
g++ Fact.cpp -o Fact.exe
```

## How to run

```bash
./priority_Queue.exe
./Queue.exe
./queueFront_Rear.exe
./Palindrome_stack.exe
./Temp_Dsa.exe
./Fact.exe
```

## Notes

- These programs are designed for learning and demonstration purposes.
- `Queue.cpp` and `queueFront_Rear.cpp` have the same logic, so you can use either one.
- Input is read from standard input with basic prompts.
