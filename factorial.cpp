#include <iostream>
using namespace std;
int factorial( int n)
{ 
    // first write the base case and always use the return statement in the base case. Base case basically shows the point where the recursion should stop .
    // now write the recursive relation
    if (n==0) //base case
         return 1;
    
    int smallerproblem = factorial (n-1); //recursive relation
    int biggerproblem = n * smallerproblem;
    return biggerproblem;
}
int main()
{int i, fact;
cout << "enter value" << endl;
cin >> i;
fact = factorial(i);
cout << "factorial value =" <<fact;
}

// Without base case you'll get segmentation fault but why?
//if you dont write the base case- the function calls keep getting accumulated in the function stack 