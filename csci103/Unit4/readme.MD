# Unit 4 - Vectors, LinkedLists...
## Linked List Structure
#### Made up of Nodes
```cpp
struct Node {
    int val;  //each node holds some individual data
    Node* next;  //each node has a pointer to the next node
    Node(int data) : data(data), next(nullptr) {} // constructor for Node
};
```

### Linked List Class
```cpp
class LinkedList {
private:
    Node* head;    // ALL LL must have a head (pointer to first node)

public:
  int front();
  void push_back(int val);
  other methods...
}
```



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
void insert_if_greater_than_front(int data) {}  //push to end of list if the value if greater than the first
void insert_if_greater_than_back(int data) {}  //push to end of list if that value is less than the last
```

Link to template code: [Singly Linked List w/o Tail](SinglyLL.cpp)

### Answers
<details>
  <summary>Click to reveal..</summary>

  ### Singly Linked List w/o Tail
  ```cpp
    // ADD NODE TO END OF LIST
    // 1 -> 2 -> 3 becomes 1 -> 2 -> 3 -> 4 when push_back(4)
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

    // ADD NODE TO FRONT OF LIST
    // 1 -> 2 -> 3 becomes 4 -> 1 -> 2 -> 3 when push_front(4)
    void push_front(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }  

        Node * myNode = new Node(data);
        myNode->next = head;
        head = myNode;
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


    // return value of first node
    // 1 -> 2 -> 3 return 1
    int front() {
        if (not head) {return -1;}
        return head->val;
    }

    // return value of last node
    // 1 -> 2 -> 3 return 3
    int back() {
        if (not head) {return -1;}
        Node * curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        return curr->val;

    }

    // add node to the second last
    // 1 -> 2 -> 3 becomes 1 -> 2 -> 4 -> 3 when push_second_back(4)
    void push_second_back(int data) {
        if (head == nullptr) {
            head = new Node(data);
        }
        if (head->next == nullptr) {
            Node* newFirst = new Node(data);
            newFirst->next = head;
            head = newFirst;
        }
        Node * curr = head;
        while (curr->next->next != nullptr) {
            curr = curr->next;
        }
        Node * last = curr->next;
        curr->next = new Node(data);
        curr->next->next = last;
    }

    // remove second to last node
    // 1 -> 2 -> 3 -> 4 becomes 1 -> 2 -> 4  when pop_second_back()
    void pop_second_back() {
        if (head == nullptr or head->next == nullptr) {return;}

        Node * curr = head;
        while (curr->next->next->next != nullptr) {
            curr = curr->next;
        }
        Node * last = curr->next->next;
        delete curr->next;
        curr->next = last;
    }

    // add node to the one after the first
    // 1 -> 2 -> 3 becomes 1 -> 4 -> 2 -> 3 when push_second_front(4)
    void push_second_front(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }
        Node * second = head->next;
        head->next = new Node(data);
        head->next->next = second;
    }

    // removes second node
    // 1 -> 2 -> 3 -> 4 becomes 1 -> 3 -> 4 when pop_second_front()
    void pop_second_front() {
        if (head == nullptr or head->next == nullptr) {return;}
        Node * third = head->next->next;
        delete head->next;
        head->next = third;
    }

    //push to end of list if the value if greater than the first
    void insert_if_greater_than_front(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }
        if (data < head->val) {
            return;
        }
        Node * curr = head;
        while (curr->next!=nullptr) {
            curr = curr->next;
        }
        curr->next = new Node(data);
        curr->next->next = NULL;
    }

    //push to end of list if the value is greater than the last
    void insert_if_greater_than_back(int data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }
        Node * curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        if (data < curr->val ) {
            return;
        }
        curr->next = new Node(data);
        curr->next->next = NULL;
    }
  
    
  ```


  ### Singly Linked List w/ Tail
  ### Doubly Linked List w/o Tail
  ### Doubly Linked List w/ Tail
  you can email me if you want to check answers for these
  
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

