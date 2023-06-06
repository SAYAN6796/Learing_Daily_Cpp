#include <iostream>
using namespace std;
void print(int arr[], int start, int end)
{
    cout << "Start of array is "<< start <<endl;
    cout << "End of array is " << end <<endl;
    for (int i=start;i<=end;i++)
    cout << arr[i] << ";";
    cout << endl;
}
int fstoccurencesearch(int *arr, int start, int end, int key, int fstindex)
{   print(arr, start, end);
    if (start > end) //basecase
    return fstindex;
    int mid = (start + end)/2;
    if (arr[mid] == key)
     {  fstindex=mid;
        end = mid -1;
     }
    else if (key> arr[mid])
     {
        start=mid+1;
     }   
    else if (key <arr[mid])
     {
        end =start -1;
     } 
     fstindex=fstoccurencesearch(arr, start, end, key, fstindex);
     return fstindex;
}
int lstoccurencesearch(int *arr, int start, int end, int key, int lstindex)
{   print(arr, start, end);
    if (start > end) //basecase
    return lstindex;
    int mid = (start + end)/2;
    if (arr[mid] == key)
     {  lstindex=mid;
        start= mid +1;
     }
    else if (key> arr[mid])
     {
        start=mid+1;
     }   
    else if (key <arr[mid])
     {
        end =start -1;
     } 
     lstindex=lstoccurencesearch(arr, start, end, key, lstindex);
     return lstindex;
}    
int main()
{
pair<int,int> p;
int arr[12]={1,2,3,3,3,3,3,3,3,6,7,7};
int key= 3;
p.first=fstoccurencesearch(arr,0,11,key,-1);
p.second=lstoccurencesearch(arr,0,11,key,-1);
cout << "First occurence of " <<key<<" is at index :" <<p.first <<endl;
cout << "Last occurence of " <<key<<" is at index :" <<p.second <<endl;
}


    