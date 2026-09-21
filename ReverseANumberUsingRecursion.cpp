#include <bits/stdc++.h>
using namespace std;
int ReverseNum(int n, int rev)
{
    if(n==0)
    return rev;
    else
    return ReverseNum(n/10,(rev*10+(n%10)));
    }
 
   int main()
   {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
     cout<< ReverseNum(n, 0);
    return 0;

   }