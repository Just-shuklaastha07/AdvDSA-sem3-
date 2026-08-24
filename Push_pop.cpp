#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element after pushes: " << s.top() << endl;

    // Pop element
    s.pop();

    cout << "Top element after one pop: " << s.top() << endl;

    // Display all elements
    cout << "Stack elements:" << endl;

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}