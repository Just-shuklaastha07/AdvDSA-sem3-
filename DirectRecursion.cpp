#include <bits/stdc++.h>
using namespace std;

  void printnum(int n)
  {
      if(n==1)
      {
          cout<<"1\n";
          return;
      }
      cout<<n<<" ";
      printnum(n-1);
  }
  

int main() {
      printnum(10);	
      return 0;
}