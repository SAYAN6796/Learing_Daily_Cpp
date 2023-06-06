#include <iostream>
using namespace std;
int sumofelements(int *arr, int size)
{ int sum=0;
  cout << size <<endl;
if (size == 0) //base case
 return 0;
if (size ==1) //base case
 return arr[0];
int x= sumofelements((arr+1),(size-1));
sum=arr[0] + x; 
 return sum;
}
int main()
{
int n[]={1,1,1,1,1,1,1};
int size=7;
int ans=sumofelements(n,size);
cout << "Sum of all array elements" <<ans;
}