#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        std::cout << "Pushed " << value << " into the stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << "Popped " << temp->data << " from the stack.\n";
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return -1; // Or throw an exception for an empty stack
        }
        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
