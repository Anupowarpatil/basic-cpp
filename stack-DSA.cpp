#include <iostream>
#define MAX_SIZE 100
using namespace std;
class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full. Cannot push more elements.\n";
            return;
        }
          top++;
        data[top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop any element.\n";
            return -1; 
        }
        return top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty. Cannot peek.\n";
            return -1; // Return a sentinel value to indicate an error
        }
        return data[top];
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return;
        }
        std::cout << "Stack contents: ";
        for (int i = 0; i <= top; ++i) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << "\n";

    myStack.pop();
    myStack.display();

    return 0;
}
