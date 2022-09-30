#include<bits/stdc++.h> 
using namespace std;
int piviot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if( (mid-1>=0) && (mid+1<n) &&  (arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1]) && (arr[mid]>arr[0]))
        return arr[mid];
        else if(arr[mid]<arr[0])
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={3,4,5,6,1,2};
    int n= sizeof(arr)/4;
    
    cout<<piviot(arr,n);
    return 0;
}