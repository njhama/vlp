// Linked List Implementation Test

#include <iostream>
using namespace std;

struct Node {
public:
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr) {} // constructor for Node
};

// LL Class Implement
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // IGNORE
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // IMPLEMENT THESE FUNCTIONS

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

    // IGNORE (JUST TO TEST)
    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->val << "";
            if (current->next != nullptr) {
                cout <<  " -> ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }



};

int main() {
    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    cout << "Testing push_back()..." << endl;
    cout << "Expected: 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.push_front(4);

    cout << "Testing push_front(4)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    cout << "Testing front()..." << endl;
    cout << "Expected: 4 " << endl;
    cout << "Yours:    " << list.front() << endl;
    cout << endl;

    cout << "Testing back()..." << endl;
    cout << "Expected: 3 " << endl;
    cout << "Yours:    " << list.back() << endl;
    cout << endl;
    
    list.push_second_back(5);

    cout << "Testing push_second_back(5)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 5 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.pop_second_back();

    cout << "Testing pop_second_back()..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.push_second_front(6);

    cout << "Testing push_second_front(6)..." << endl;
    cout << "Expected: 4 -> 6 -> 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.pop_second_front();

    cout << "Testing pop_second_front()..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;
    
    list.insert_if_greater_than_front(3);

    cout << "Testing insert_if_greater_than_front(3)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 " << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.insert_if_greater_than_front(5);

    cout << "Testing insert_if_greater_than_front(3)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 -> 5" << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.insert_if_greater_than_back(4);

    cout << "Testing insert_if_greater_than_back(4)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 -> 5" << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    list.insert_if_greater_than_back(6);

    cout << "Testing insert_if_greater_than_back(6)..." << endl;
    cout << "Expected: 4 -> 1 -> 2 -> 3 -> 5 -> 6" << endl;
    cout << "Yours:    ";
    list.print();
    cout << endl;

    return 0;
}
