#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node(value);
    newNode->next = NULL;

    if (front == NULL) {
        front = rear = newNode;
        rear->next = front; // Make it circular
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front; // Maintain circular link
    }

    cout << "Enqueued " << value << " to queue" << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    if (front == rear) { // Only one element
        front = rear = NULL;
    } else {
        front = front->next;
        rear->next = front; // Maintain circular link
    }

    cout << "Dequeued " << temp->data << " from queue" << endl;
    delete temp;
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    cout << "Queue elements: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}