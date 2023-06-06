#include <iostream>
using namespace std;
int fib(int a)
{  if (a==0 || a==1) //basecase
        return a;
   //recursive relation
   int recursion_result1=fib(a-1);
   int recursion_result2=fib(a-2);
   //processing
   int ans = recursion_result1+recursion_result2;
   cout << ans << "," <<endl;
   return ans;
}
int main()
{
   int n;
   cout <<"Enter n"<<endl;
   cin >>n;
   int nthFib= fib(n);
}

//this is also an example of head recursion