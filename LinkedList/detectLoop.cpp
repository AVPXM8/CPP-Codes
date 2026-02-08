#include <iostream>

// Using the standard namespace for cout, etc.
using namespace std;

// Definition for a singly-linked list node.
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

// Function to detect a loop in a linked list using Floyd's Cycle-Finding Algorithm.
bool detectLoop(Node* head) {
    // If the list is empty or has only one node, no loop can exist.
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    // Traverse the list with two pointers.
    // 'slow' moves one step at a time.
    // 'fast' moves two steps at a time.
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast pointers meet, a loop is present.
        if (slow == fast) {
            cout << "Loop detected! Pointers met at node with value: " << slow->data << endl;
            return true;
        }
    }

    // If fast reaches the end of the list, no loop was found.
    return false;
}

// Helper function to print the list (stops if a loop is found to prevent infinite printing)
void printList(Node* head) {
    Node* temp = head;
    int count = 0; // To prevent infinite loop printing
    while (temp != nullptr && count < 20) {
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    if (temp != nullptr) {
        cout << "...";
    } else {
        cout << "NULL";
    }
    cout << endl;
}

int main() {
    // --- Test Case 1: List with a loop ---
    cout << "--- Test Case 1: List with a loop ---" << endl;
    Node* headWithLoop = new Node(1);
    headWithLoop->next = new Node(2);
    Node* loopNode = headWithLoop->next; // Node with data 2
    headWithLoop->next->next = new Node(3);
    headWithLoop->next->next->next = new Node(4);
    headWithLoop->next->next->next->next = new Node(5);

    // Create a loop: The last node (5) points back to the node with data 2.
    headWithLoop->next->next->next->next->next = loopNode;

    cout << "List (with loop from 5 back to 2): ";
    printList(headWithLoop);

    if (detectLoop(headWithLoop)) {
        cout << "Result: Loop is present in the list." << endl;
    } else {
        cout << "Result: No loop detected in the list." << endl;
    }

    cout << endl;

    // --- Test Case 2: List without a loop ---
    cout << "--- Test Case 2: List without a loop ---" << endl;
    Node* headWithoutLoop = new Node(10);
    headWithoutLoop->next = new Node(20);
    headWithoutLoop->next->next = new Node(30);

    cout << "List (without loop): ";
    printList(headWithoutLoop);

    cout << "Result: " << (detectLoop(headWithoutLoop) ? "Loop detected." : "No loop detected.") << endl;

    return 0;
}