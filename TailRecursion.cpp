#include <bits/stdc++.h>
using namespace std;

  void fun(int n)
  {
      if(n==0)
      {
         return;
      }
      else{
          
      
      cout<<n<<" ";
      return fun(n-1);
  }
  }

int main() {
    
      fun(10);	
      return 0;
}