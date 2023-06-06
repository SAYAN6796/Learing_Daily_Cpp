#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
 {
    if (size==1 || size==0) //Base Case
    return true;

    if (arr[0]>arr[1])
      {
      return false;
      }
    else
      {bool remainingpart= isSorted(arr+1,size-1);
      return remainingpart;
      }
 }
 int main()
 {
    int arr[]={2,4,9,9,9};
    bool ans = isSorted(arr,5);
    if (ans)
      cout << "array is sorted" <<endl;
    else
      cout << "array is not sorted" <<endl;
 }