#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    // Function to push an element onto the stack
    void push(const T& element) {
        elements.push_back(element);
    }

    // Function to pop an element from the stack
    void pop() {
        if (!isEmpty()) {
            elements.pop_back();
        } else {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Function to get the top element of the stack
    T top() const {
        if (!isEmpty()) {
            return elements.back();
        } else {
            std::cerr << "Stack is empty. No top element." << std::endl;
            // You may throw an exception or handle it differently based on your requirements
            exit(EXIT_FAILURE);
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Function to get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    // Example usage of the Stack class
    Stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;
    std::cout << "Stack size: " << myStack.size() << std::endl;

    myStack.pop();
    std::cout << "After popping, top element: " << myStack.top() << std::endl;
    std::cout << "Stack size: " << myStack.size() << std::endl;

    return 0;
}
