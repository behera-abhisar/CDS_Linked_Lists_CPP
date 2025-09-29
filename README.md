# EXPERIMENT 17: IMPLEMENTING LINKED LISTS USING C++

## AIM
To implement **linked lists** in C++ and demonstrate operations such as **creation**, **traversal**, **insertion**, and **deletion** of nodes.

## TOOLS USED
- C++ Compiler (e.g., g++, clang++)
- Text Editor / IDE (VS Code, Code::Blocks, etc.)
- Terminal/Command Prompt to compile and run the program

## THEORY

### 1. What is a Linked List?
A **linked list** is a dynamic data structure consisting of nodes where each node contains:
- **Data**: The value or information to store.
- **Pointer (next)**: Address of the next node in the sequence.

Linked lists are stored in **non-contiguous memory locations**, unlike arrays.

### 2. Types of Linked Lists
- **Singly Linked List**: Each node points to the next node.
- **Doubly Linked List**: Each node has pointers to both the previous and next nodes.
- **Circular Linked List**: The last node points back to the first node, forming a circle.

### 3. Key Operations
- **Creation**: Dynamically allocate nodes and link them.
- **Traversal**: Visit each node from head to end.
- **Insertion**: Add a new node at the beginning, end, or any position.
- **Deletion**: Remove a node from a specific position.
- **Search**: Find a node with a given value.

### 4. Advantages of Linked Lists
- **Dynamic size**: No need to predefine size like arrays.
- **Efficient insertions/deletions**: Especially in the middle of the list.

### 5. Disadvantages of Linked Lists
- **Extra memory** for storing pointers.
- **Sequential access** only (no direct indexing like arrays).

### 6. Practical Use
Linked lists are widely used in implementing:
- **Stacks and queues**
- **Graphs (adjacency list)**
- **Memory management systems**
- **Dynamic data structures (polynomial representation, sparse matrices)**

## EXPERIMENT 17(A): CREATING A NODE IN  A LINKED LIST

### ALGORITHM
1. **Start**
2. Define a class `Node` with:
   - Data member `val` to store the integer value.
   - Pointer `next` to point to the next node.
   - Constructor to initialize `val` with the given data and `next` to `NULL`.
3. In `main()`:
   - Dynamically create a new `Node` object with a given value (e.g., 10) and store its address in `head`.
   - Access and print the data stored in the node using `(*head).val`.
   - (Optional) Attempt to access `(*head).next` (currently `NULL`).
4. **Stop**

## EXPERIMENT 17(B): LINKED LIST CREATION AND TRAVERSAL IN C++

### ALGORITHM
1. **START**  
2. Define a class `Node` with:  
   - Data member `val` to store integer data.  
   - Pointer `next` to store the address of the next node.  
   - Constructor to initialize `val` with given data and `next` as `NULL`.  
3. In `main()`:  
   - Dynamically create three nodes `head`, `second`, and `third` with values (10, 20, 30).  
   - Link the nodes: `head->next = second` and `second->next = third`.  
4. Initialize a pointer `temp` to `head`.  
5. Traverse the linked list using a `while` loop until `temp` becomes `NULL`:  
   - Print `temp->val`.  
   - Move `temp` to the next node.  
6. **STOP**

## EXPERIMENT 17(C): INSERTION AT HEAD IN A LINKED LIST IN C++

### ALGORITHM
1. **START**  
2. Define a class `Link` with:  
   - Data member `data` to store integer data.  
   - Pointer `next` to store the address of the next node.  
   - Constructor to initialize `data` with given value and `next` as `NULL`.  

3. Define a function `insertHead(Link* &head, int data)` to:  
   - Dynamically create a new node `n`.  
   - Set `n->next = head`.  
   - Update `head = n` to insert at the beginning.  

4. Define a function `display(Link* head)` to:  
   - Traverse the linked list starting from `head`.  
   - Print each node’s `data` separated by `->`.  

5. In `main()`:  
   - Initialize `head = NULL`.  
   - Call `insertHead()` to insert new nodes at the head.  
   - Call `display()` after each insertion to print the list.  

6. **STOP**

## EXPERIMENT 17(D): INSERTION AT TAIL IN A LINKED LIST IN C++

### ALGORITHM
1. **START**  
2. Define a class `Link` with:  
   - Data member `data` to store integer data.  
   - Pointer `next` to point to the next node.  
   - Constructor to initialize `data` with the given value and `next` as `NULL`.  

3. Define a function `insertTail(Link* &head, int data)` to:  
   - Dynamically create a new node `n`.  
   - If `head == NULL`, assign `head = n`.  
   - Else traverse the list till the last node and set `lastNode->next = n`.  

4. Define a function `display(Link* head)` to:  
   - Traverse the linked list from `head`.  
   - Print each node’s `data` separated by `->`.  

5. In `main()`:  
   - Initialize `head = NULL`.  
   - Use `insertTail()` to add nodes at the tail.  
   - Call `display()` to show the updated list after insertions.  

6. **STOP**
