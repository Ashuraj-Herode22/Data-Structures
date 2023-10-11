#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> stack;

public:
    bool isEmpty() const {
        return stack.empty();
    }

    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (!isEmpty()) {
            stack.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop.\n";
        }
    }

    int top() const {
        if (!isEmpty()) {
            return stack.back();
        } else {
            std::cout << "Stack is empty.\n";
            return -1; // Return a dummy value for an empty stack
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << "\n";

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << "\n";

    myStack.pop();
    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack

    return 0;
}
