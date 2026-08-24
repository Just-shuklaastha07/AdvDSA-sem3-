#include <iostream>
using namespace std;

class Stack {
    struct node {
        int data;
        node* next;

        node(int value) {
            data = value;
            next = NULL;
        }
    };

    node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        node* newnode = new node(value);
        newnode->next = top;
        top = newnode;

        cout << "Pushed " << value << " to stack" << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        node* temp = top;
        top = top->next;

        cout << "Popped " << temp->data << " from stack" << endl;
        delete temp;
    }

    void peek() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Top element is: " << top->data << endl;
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }

    node* temp = top;

    cout << "Stack elements: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
}; 

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.peek();
    st.pop();
    st.display();

    return 0;
}