#include <iostream>
#include <queue> 
#include <vector>   
using namespace std;
int main() {
    priority_queue<int> pq;

    // Push elements
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout << "Top element after pushes: " << pq.top() << endl;

    // Pop element
    pq.pop();

    cout << "Top element after one pop: " << pq.top() << endl;

    // Display all elements
    cout << "Priority Queue elements:" << endl;

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}