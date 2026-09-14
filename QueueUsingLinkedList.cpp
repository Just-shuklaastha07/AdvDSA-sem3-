#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node*front=NULL;
Node*rear=NULL;
void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {
        front = rear = newNode;
    }

    rear->next = newNode;
    rear = newNode;

    cout << "Enqueued " << value << " to queue" << endl;
}
void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;
    front = front->next;

    cout << "Dequeued " << temp->data << " from queue" << endl;
    delete temp;

    if (front == NULL) {
        rear = NULL;
    }
}
void display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    cout << "Queue elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
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