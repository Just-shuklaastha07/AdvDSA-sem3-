#include <bits/stdc++.h>
using namespace std;
int PowOfDigit(int a, int n)
{
    if(n==0)
    return 1;
    else
    return a * PowOfDigit(a, n-1);
    }
 
   int main()
   {
    int a, n;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>n;
    cout<< PowOfDigit(a,n);
    return 0;

   }