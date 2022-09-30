#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(e>=s)
    {
        mid = s + (e-s)/2 ;
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;//left most element dundhna hai
        }
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return ans;
}
int last_occurence(int arr[],int n,int target)
{
   int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(e>=s)
    {
        mid = s + (e-s)/2 ;
        if(arr[mid]==target)
        {
            ans=mid;
            s=mid+1;//right most element dundhna hai
        }
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return ans;
}
int main()
{
    int arr[]={2,3,4,5,5,5,5,6,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    cout<<first_occurence(arr,n,target)<<" "<<last_occurence(arr,n,target);

    return 0;
}