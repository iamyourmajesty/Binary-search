#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[],int n,int target)
{
    
    int s=0;
    int e=n-1;
    int mid;

    while(e>=s)
    {
        mid=s + (e-s)/2;

        if(arr[mid]==target)
        return mid;
        else if(target>arr[mid])
        s =mid +1;
        else
        e=mid -1;
    }
    return -1;
}
int main()
{
    int arr[]={2,4,6,7,8,34,78,86};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    
    cout<<"index at which "<<target<<" is present : "<<binSearch(arr,n,target);
    return 0;
}
// do leetcode problem 704