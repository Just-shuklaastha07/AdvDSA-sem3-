#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char source, char helper, char destination)
{
    // Base condition
    if(n == 1)
    {
        cout << "Move disk 1 from " << source 
             << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to helper
    TowerOfHanoi(n - 1, source, destination, helper);

    // Move the largest disk from source to destination
    cout << "Move disk " << n << " from " << source 
         << " to " << destination << endl;

    // Move n-1 disks from helper to destination
    TowerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    TowerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}