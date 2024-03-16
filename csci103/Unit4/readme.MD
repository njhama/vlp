# Unit 4 - Vectors, LinkedLists...
## Linked List Implementation Practice
### Exercises
#### Implement all methods for..
- Singly LL w/o Tail 
- Singly LL w/ Tail
- Doubly LL w/o Tail
- Doubly LL w/ Tail
```cpp
//default
void push_front(int data) {}
void push_back(int data) {}
void pop_front() {}
void pop_back() {}

//challenges
void push_second_front(int data) {}  //push to the second spot
void push_second_back(int data) {}  //push to second to last
void pop_second_front() {}  //remove 2nd node
void pop_second_back() {}  //remove 2nd to last node

//other challenges
void insert_if_greater_than_front(int data) {}  //push to end of list if the value if greater than the first
void insert_if_greater_than_back(int data) {}  //push to end of list if that value is less than the last
void push_in_order(int data) {} //add a new node to a sorted linked ist
```

Link to template code: [Singly Linked List w/o Tail](SinglyLL.cpp)

### Answers
<details>
  <summary>Click to reveal..</summary>

  ### Singly Linked List w/o Tail
  ```cpp
    void push_front(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }  

        Node * myNode = new Node(data);
        myNode->next = head;
        head = myNode;
    }

    void push_back(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }   

        Node * curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = new Node(data);
        curr->next->next = nullptr;
    }

    void pop_front() {
        if (not head) {
            return;
        }
        if (head->next = nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node * temp = head->next;
        delete head;
        head = temp;
    }

  void pop_back() {
        if (not head) {
            return;
        }
        if (head->next = nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* curr = head;
        while (curr->next->next != nullptr) {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = nullptr;
    }
  
    
  ```
  ### Singly Linked List w/ Tail
   ```cpp
  
  ```

  ### Doubly Linked List w/o Tail
   ```cpp
  
  ```

  ### Doubly Linked List w/ Tail
   ```cpp
  
  ```
  
</details>















## Methods and Runtimes
### Vectors
- push_back(T val) O(1)
- pop_back() O(1)
- operator[] O(1)
- can't push front with vectors

### Singly Linked List w/o Tail Pointer
- push_back(T val) O(n)
- pop_back() O(n)
- push_front(T val) O(1)
- pop_front() O(1)

### Singly Linked List w/ Tail Pointer
- push_back(T val) O(1)
- pop_back() O(n) (* important!)
- push_front(T val) O(1)
- pop_front() O(1)

### Doubly Linked List w/o Tail Pointer
- push_back(T val) O(n)
- pop_back() O(n)
- push_front(T val) O(1)
- pop_front() O(1)

### Doubly Linked List w/ Tail Pointer
- push_back(T val) O(1)
- pop_back() O(1) 
- push_front(T val) O(1)
- pop_front() O(1)

