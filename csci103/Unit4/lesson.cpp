// Vectors & Linked Lists


#include <iostream>
#include <vector>

using namespace std;

// Linked List Node Structure
struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

// Function to append a node to the end of the Linked List
void appendNode(Node** head, int newData) {
    Node* newNode = new Node(newData);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}

// Function to print the Linked List
void printList(Node* node) {
    cout << "Linked List: ";
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

int main() {
    // Demonstrate vector usage
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    cout << "Vector elements:\n";
    for(int num : numbers) {
        cout << num << endl;
    }
    numbers.pop_back(); // Remove the last element
    cout << "Vector after pop_back():\n";
    for(int num : numbers) {
        cout << num << endl;
    }

    // Transition to Linked List
    cout << "\nTransitioning to Linked List...\n";

    // Creating a Linked List and appending nodes
    Node* head = nullptr;
    appendNode(&head, 40);
    appendNode(&head, 50);
    appendNode(&head, 60);
    
    // Printing the Linked List
    printList(head);

    // Cleaning up dynamically allocated memory for the linked list
    Node* current = head;
    while(current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
