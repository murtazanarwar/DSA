#include <iostream>

class Stack {
private:
    int size;
    int top;
    int* stackArray;

public:
    Stack(int s) : size(s), top(-1) {
        stackArray = new int[size];
    }

    ~Stack() {
        delete[] stackArray;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack Overflow! Cannot push more elements.\n";
            return;
        }
        stackArray[++top] = value;
        std::cout << "Pushed " << value << " into the stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow! Cannot pop from an empty stack.\n";
            return;
        }
        std::cout << "Popped " << stackArray[top--] << " from the stack.\n";
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return -1; // Or throw an exception for an empty stack
        }
        return stackArray[top];
    }
};

int main() {
    Stack stack(5); // Creating a stack with a maximum size of 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60); // Trying to push into a full stack

    std::cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
