#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter number of elements ";
	cin>>n;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	cout<<"Address of "<<arr[i] <<" "<<&arr[i]<<endl;
	}
	//sum=sum+arr[i];
	return 0;
}
