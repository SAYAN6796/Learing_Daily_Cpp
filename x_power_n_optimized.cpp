#include <iostream>
using namespace std;

int power(int x, int n)
{  if (n==0)
     return 1;   
   if (n==1)
     return x;
   int ans = power(x,(n/2));
   if (n%2==0)
     return ans*ans;
   if (n%2==1)
     return x* ans * ans;   
}
int main ()
{
  cout << "Ans is = " << power (2, 32);
  return 0;
}