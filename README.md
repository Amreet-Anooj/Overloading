# Pointer Basics 
## Aim 
To use basic pointers.

## Software Used 
VS Code

## Theory
**Definition**
<br>
A pointer is a variable that stores the memory address of another variable. It does not hold any actual data value like a normal variable, instead holds the location where the data is stored in memory. Pointers allow for efficient array and memory management, and can be used to directly manipulate memory.
Using pointers significantly improves performance for repetitive operations, like traversing iterable data structures (e.g. strings). In particular, it is often much cheaper in time and space to copy and dereference pointers than it is to copy and access the data to which the pointers point.  
The basic syntax to define a pointer is:
```cpp
int a = 5;
int *ptr = &a;
```
<br>  

> Visual Representation of memory address:
<br>

| Address | Contents     |
|---------|--------------|
| 0x8130  | 0x00000005   |
| 0x8134  | 0x00000000   |

<p align="left">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20221013162237/PointersinC.png" alt="Logo" width="600" length = "500">  
<br>
  
**Features of Pointers**  
- An array, of any type, can be accessed with the help of pointers, without considering its subscript range.
- Pointers are used for file handling.
- Pointers are used to allocate memory dynamically.

**Advantages of Pointers**
- Memory efficiency: Pointers allow for memory-efficient data sharing between different parts of a program. 
- Improved performance: Pointers can help reduce code and improve program performance. 
- Multiple values: Pointers allow programmers to return multiple values from a function. 
- Data structure building: Pointers can be used to build complex data structures like linked lists, trees, and graphs

**Drawbacks of Pointers**
- It requires one additional dereferences step 
- If we forgot to deallocate a memory then it will lead to a memory leak.

 **Conclusion**
- We learnt how to use pointers
