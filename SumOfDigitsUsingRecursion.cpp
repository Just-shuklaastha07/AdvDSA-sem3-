#include <bits/stdc++.h>
using namespace std;
int SumOfDigit(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10) + SumOfDigit(n/10);
    }
 
   int main()
   {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
     cout<< SumOfDigit(n);
    return 0;

   }