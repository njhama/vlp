

### 1. Course Overview and Motivation for Data Structures
- **Slides:** [L01_Overview.pdf](L01_Overview.pdf), [L02a_MemAlloc.pdf](L02a_MemAlloc.pdf)

### 2. Classes and Linked Lists
- **Classes (Initialization Lists)**
  - **Slides:** [L02b_Classes.pdf](L02b_Classes.pdf)
- **Linked Lists**
  - **Slides:** [L02e_LinkedLists.pdf](L02e_LinkedLists.pdf)
- **Example Code: Linked List**

```cpp
#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    return 0;
}
```

### 3. Operator Overloading and Runtime
- **Operator Overloading**
  - **Slides:** [L02c_OperatorOverloading.pdf](L02c_OperatorOverloading.pdf)
- **Runtime**
  - **Slides:** [L02d_Runtime.pdf](L02d_Runtime.pdf)

### 4. Recursion and Copy Semantics
- **Recursion**
  - **Slides:** [L03_Recursion.pdf](L03_Recursion.pdf)
- **Copy Semantics**
  - **Slides:** [L02f_CopyConstructors.pdf](L02f_CopyConstructors.pdf)

### 5. Abstract Data Types (ADTs) and Standard Template Library (STL)
- **ADTs**
  - **Slides:** [L04_ADTs.pdf](L04_ADTs.pdf)
- **STL**
  - **Slides:** [L05_STL.pdf](L05_STL.pdf)

### 6. Inheritance and Polymorphism
- **Inheritance**
  - **Slides:** [L06a_Inheritance.pdf](L06a_Inheritance.pdf)
- **Polymorphism**
  - **Slides:** [L06b_Polymorphism.pdf](L06b_Polymorphism.pdf)

### 7. ArrayLists
- **Slides:** [L07_QueueStackDeque.pdf](L07_QueueStackDeque.pdf)

### 8. Stacks, Queues, and Templates
- **Stacks and Queues**
  - **Slides:** [L07_QueueStackDeque.pdf](L07_QueueStackDeque.pdf)
- **Templates**
  - **Slides:** [L08_Templates.pdf](L08_Templates.pdf)

### 9. Trees and Heaps
- **Trees**
  - **Slides:** [L09_PQHeaps.pdf](L09_PQHeaps.pdf)
- **Heaps**
  - **Slides:** [L09_PQHeaps.pdf](L09_PQHeaps.pdf)
- **Example Code: Binary Search Tree**

```cpp
#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    TreeNode* root;
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insertRec(root, val);
    }

    void inOrder() {
        inOrderRec(root);
        std::cout << std::endl;
    }

private:
    TreeNode* insertRec(TreeNode* node, int val) {
        if (!node) {
            return new TreeNode(val);
        }
        if (val < node->data) {
            node->left = insertRec(node->left, val);
        } else if (val > node->data) {
            node->right = insertRec(node->right, val);
        }
        return node;
    }

    void inOrderRec(TreeNode* node) {
        if (node) {
            inOrderRec(node->left);
            std::cout << node->data << " ";
            inOrderRec(node->right);
        }
    }
};

int main() {
    BST tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(5);
    tree.inOrder();
    return 0;
}
```

### 10. Graph Algorithms
- **Slides:** [L10_GraphsAlgorithms.pdf](L10_GraphsAlgorithms.pdf)

### 11. Graph and Tree Traversals
- **Graph Traversals**
  - **Slides:** [L11_GraphTraversals.pdf](L11_GraphTraversals.pdf)
- **Tree Traversals**
  - **Slides:** [L11_GraphTraversals.pdf](L11_GraphTraversals.pdf)

### 12. Backtracking and Iterators
- **Backtracking**
  - **Slides:** [L12_BacktrackingSearch.pdf](L12_BacktrackingSearch.pdf)
- **Iterators**
  - **Slides:** [L13_Iterators.pdf](L13_Iterators.pdf)

### 13. Binary Search Trees (BSTs) and AVL Trees
- **Binary Search Trees**
  - **Slides:** [L14_BalancedBST_AVL.pdf](L14_BalancedBST_AVL.pdf)
- **AVL Trees**
  - **Slides:** [L14_BalancedBST_AVL.pdf](L14_BalancedBST_AVL.pdf)

### 14. Splay Trees and Hash Tables
- **Splay Trees**
  - **Slides:** [L15_SplayTrees.pdf](L15_SplayTrees.pdf)
- **Hash Tables**
  - **Slides:** [L16_HashingIntro.pdf](L16_HashingIntro.pdf)

### 15. Counting and Probability
- **Counting**
  - **Slides:** [L17_Counting.pdf](L17_Counting.pdf)
- **Probability**
  - **Slides:** [L18_Probability.pdf](L18_Probability.pdf)

### 16. Number Theory and Hash Functions
- **Number Theory**
  - **Slides:** [L19_NumberTheory.pdf](L19_NumberTheory.pdf)
- **Hash Functions**
  - **Slides:** [L20_HashFunctions.pdf](L20_HashFunctions.pdf)

### 17. Tries and Skip Lists
- **Tries**
  - **Slides:** [L22_Tries.pdf](L22_Tries.pdf)
- **Skip Lists**
  - **Slides:** [L21_SkipLists.pdf](L21_SkipLists.pdf)

### 18. Amortized Analysis and Merge Trees
- **Amortized Analysis**
- **Merge Trees**

---
