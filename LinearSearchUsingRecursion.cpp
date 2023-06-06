#include <iostream>
using namespace std;
void print(int arr[], int s)
{
    cout << "Size of array is "<< s<<endl;
    for (int i=0;i<s;i++)
    cout << arr[i] << ";";
    cout << endl;
}
bool linearSearch(int arr[],int size, int k)
{   print (arr, size);
    //base case
    if (size ==0)
    return false;
    if (arr[0] ==k)
    return true;
    bool remainingPart =linearSearch(arr+1, size-1, k);
    return remainingPart;
}
int main()
{
    int arr[5]= {3,5,1,2,4};
    int size=5;
    int key =2;
    bool ans =linearSearch(arr, size, key);
    if (ans)
     cout << "Present "<<endl;
    else
      cout << "Absent" <<endl;
}