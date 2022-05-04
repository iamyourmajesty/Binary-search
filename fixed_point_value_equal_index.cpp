#include<bits/stdc++.h>
using namespace std;
int fixed_point(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;//if there is no fixed point
    while(e>=s)
    {
        mid = s+ (e-s)/2;
        if(mid == arr[mid])
        return arr[mid];
        else if(arr[mid]<mid)
        s=mid+1;
        else
        e=mid-1;
    }
    return ans;
}
int main()
{
    // find fixed point in a sorted array
    // a point is said to be fixed if its value = index
    int arr[]={-10,-5,0,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<fixed_point(arr,n);
    return 0;
}