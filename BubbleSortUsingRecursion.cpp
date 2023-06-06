#include <iostream>
using namespace std;
/* Concept of Bubble Sort- in ith routh the ith largest array element will be in its correct position
*/
void sort(int *arr, int n)
{
    //base case if there is only 1 element or 0 element it means that the array is already sorted
    if (n==1 || n==0)
      return;
    
for (int i=0;i<n-1;i++)
 {
    if (arr[i]>arr[i+1])
      {int temp =arr[i];
      arr[i]=arr[i+1];
      arr[i+1]= temp;}
 }
 sort(arr, n-1);
}

int main()
{
    int arr[]={1,14,3,5,7,2,3};
    int n=7 ; //size of array
    sort (arr,n);
    for (int i=0;i< n;i++)
    {
        cout << arr [i]<< " ;";
    }
return 0;
}