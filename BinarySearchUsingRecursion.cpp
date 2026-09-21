#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int start, int end, int key)
{
  if(start>end)
  {
    return -1;
  }
  int mid=(start+end)/2;
  if(arr[mid]==key)
  return mid;
  if (key > arr[mid])
    {
        return BinarySearch(arr, mid + 1, end, key);
    }


    else
    {
        return BinarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = BinarySearch(arr, 0, n - 1, key);
        if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    
    return 0;
}