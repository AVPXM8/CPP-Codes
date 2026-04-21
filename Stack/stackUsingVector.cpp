#include <iostream>
#include <vector>
template <class T>
class Stack {
    std::vector<T> vec;

public:
    // Checks if the stack is empty.
    bool isEmpty() {
        return vec.empty();
    }

    // push operation
    void push(T val) {
        vec.push_back(val);
    }

    // Removes the top element.
    
    void pop() {
        
        vec.pop_back();
    }

    T top() {
        return vec.back();
    }
};

int main() {
    Stack<char> s;
    int choice;
    char value;

    while (true) {
        std::cout << "\n--- Stack Menu ---" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Top" << std::endl;
        std::cout << "4. Check if Empty" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> value;
                s.push(value);
                std::cout << value << " pushed to stack." << std::endl;
                break;
            case 2:
                if (s.isEmpty()) {
                    std::cout << "Stack is empty. Cannot pop." << std::endl;
                } else {
                    std::cout << "Popped element: " << s.top() << std::endl;
                    s.pop();
                }
                break;
            case 3:
                if (s.isEmpty()) {
                    std::cout << "Stack is empty." << std::endl;
                } else {
                    std::cout << "Top element is: " << s.top() << std::endl;
                }
                break;
            case 4:
                std::cout << (s.isEmpty() ? "Stack is empty." : "Stack is not empty.") << std::endl;
                break;
            case 5:
                std::cout << "Exiting program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    }

    return 0;
}
