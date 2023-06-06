# include <iostream>
using namespace std;
void print(int arr[], int start, int end)
{
    cout << "Start of array is "<< start <<endl;
    cout << "End of array is " << end <<endl;
    for (int i=start;i<=end;i++)
    cout << arr[i] << ";";
    cout << endl;
}
bool binarysearch(int arr[],int start,int end,int key)
{   print (arr, start, end);
    if (start > end) //base case
      return false;
    int mid = (start+end)/2;
    if (arr[mid]==key)
      return true;
    if (key>arr[mid])
      {
        start =mid+1;
        int result=binarysearch(arr,start,end,key);
        return result;
      }
    else
      {
        end = mid -1;
        int result=binarysearch(arr,start,end,key);
        return result;
      }
}
int main()
{
    int arr[7]= {2,3,4,7,8,12,15};
    int size=7;
    int key= 15;
    int result = binarysearch(arr,0,size-1,key);
    if (result)
    cout << "Present" << endl;
    else
    cout << "Absent" << endl;
}
