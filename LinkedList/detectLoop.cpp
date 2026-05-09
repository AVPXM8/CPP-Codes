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
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Loop detected! Pointers met at node with value: " << slow->data << endl;
            return true;
        }
    }

    return false;
}

// Function to break a loop if one exists (necessary for safe deletion)
void breakLoop(Node* head) {
    if (head == nullptr) return;

    Node* slow = head;
    Node* fast = head;
    bool loopExists = false;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            loopExists = true;
            break;
        }
    }

    if (loopExists) {
        slow = head;
        // If the meeting point is at the head
        if (slow == fast) {
            while (fast->next != slow) fast = fast->next;
        } else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        fast->next = nullptr; // Break the loop
    }
}

// Function to delete all nodes in the list
void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

// Helper function to print the list
void printList(Node* head) {
    Node* temp = head;
    int count = 0; 
    while (temp != nullptr && count < 10) {
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
    Node* loopNode = headWithLoop->next; 
    headWithLoop->next->next = new Node(3);
    headWithLoop->next->next->next = new Node(4);
    headWithLoop->next->next->next->next = new Node(5);
    headWithLoop->next->next->next->next->next = loopNode;

    if (detectLoop(headWithLoop)) {
        cout << "Result: Loop is present." << endl;
        breakLoop(headWithLoop);
        cout << "Loop broken for safe cleanup." << endl;
    } else {
        cout << "Result: No loop detected." << endl;
    }
    deleteList(headWithLoop);

    cout << endl;

    // --- Test Case 2: List without a loop ---
    cout << "--- Test Case 2: List without a loop ---" << endl;
    Node* headWithoutLoop = new Node(10);
    headWithoutLoop->next = new Node(20);
    headWithoutLoop->next->next = new Node(30);

    if (detectLoop(headWithoutLoop)) {
        cout << "Result: Loop detected." << endl;
    } else {
        cout << "Result: No loop detected." << endl;
    }
    deleteList(headWithoutLoop);

    return 0;
}