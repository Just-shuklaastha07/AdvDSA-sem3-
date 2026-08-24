// Merging of two arrays into a sorted array 
// OR
// Merging of two unsorted arrays into a sorted array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int arr3[n1 + n2];
    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    
   // int i=0; j=0; k=0;
    //while(i<n1 && j<n2){
    //    if(arr1[i]<=arr2[j]){
     //       arr3[k++] = arr1[i++];
     //   }
     //   else{
     //       arr3[k++]= arr2[j++];
     //   }
    //}
    
    sort(arr3, arr3 + n1 + n2);
    cout << "Sorted Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}