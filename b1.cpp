#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n, int T)
{
    int s =0;
    int e =n-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
         if(arr[mid]==T)
         {
            return true;
         }
         else if(T<arr[mid])
         {
            e=mid-1;
         }
         else if(T>arr[mid])
         {
                  s=mid+1;
         }
         mid=(s+e)/2;
    }
    return  false;

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    if(binarySearch(arr,10,5))
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found.";
    }
         
}