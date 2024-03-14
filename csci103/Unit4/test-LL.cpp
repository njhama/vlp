// Linked List Implementation Test

#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {} // constructor for Node
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

    }

    // ADD NODE TO FRONT OF LIST
    // 1 -> 2 -> 3 becomes 4 -> 1 -> 2 -> 3 when push_front(4)
    void push_front(int data) {

    }

    // return value of first node
    // 1 -> 2 -> 3 return 1
    int front() {

    }

    // return value of last node
    // 1 -> 2 -> 3 return 3
    int back() {

    }

    // add node to the second last
    // 1 -> 2 -> 3 becomes 1 -> 2 -> 4 -> 3 when push_second_back(4)
    void push_second_back(int data) {

    }

    // remove second to last node
    // 1 -> 2 -> 3 -> 4 becomes 1 -> 2 -> 4  when pop_second_back()
    void pop_second_back() {

    }

    // add node to the one after the first
    // 1 -> 2 -> 3 becomes 1 -> 4 -> 2 -> 3 when push_second_front(4)
    void push_second_front(int data) {

    }

    // removes second node
    // 1 -> 2 -> 3 -> 4 becomes 1 -> 3 -> 4 when pop_second_front()
    void pop_second_front() {

    }

    // IGNORE (JUST TO TEST)
    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
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

    return 0;
}
