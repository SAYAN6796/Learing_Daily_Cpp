#include <iostream>
using namespace std;
int power( int base, int n)
{ 
    // first write the base case and always use the return statement in the base case. Base case basically shows the point where the recursion should stop .
    // now write the recursive relation
    if (n==0) //base case
         return 1;
    
    /*
    int smallerproblem = power (base, (n-1)); //recursive relation
    int biggerproblem = base * smallerproblem;
    return biggerproblem; 
    */
     return (base*power(base,(n-1)));
}
int main()
{int x, ans, n;
cout << "enter value" << endl;
cin >> x;
cout << "enter n" << endl;
cin >>n;
ans = power(x,n);
cout << " x to power n= " << ans;
}

// Without base case you'll get segmentation fault but why?
//if you dont write the base case- the function calls keep getting accumulated in the function stack 