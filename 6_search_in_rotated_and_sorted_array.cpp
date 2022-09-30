#include<bits/stdc++.h>
using namespace std;
int pivotIndex(int arr[],int n)
{
    int s=0;
    int e = n-1;
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if(arr[mid]>=arr[0] and arr[mid]>=arr[n-1])
        s = mid +1;
        else
        e =mid -1;

    }
    return s;
}
int binSearch(int arr[],int n ,int s,int e,int target)
{
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]<target)
        s = mid + 1;
        else
        e = mid -1;
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n = sizeof(arr)/4;
    int target=5;
    int pi = pivotIndex(arr,n);
    if(pi!=0)
    {
        if(arr[0]<target)
        cout<<binSearch(arr,n,0,pi-1,target);
        else
        cout<<binSearch(arr,n,pi,n,target);

    }
    else
    cout<< binSearch(arr,n,0,n-1,target);
    return 0;
}