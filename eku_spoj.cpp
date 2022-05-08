#include <iostream>

using namespace std;
bool isPossible(int arr[],int n,int mid,int target)
{
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        sum += arr[i]-mid;
    }
    if(sum>=target)
    return true;
    
    return false;
}
int getMaxHight(int arr[],int n,int target)
{
    int s=0;
    int e=0;
    for(int i=0;i<n;i++)
    if(arr[i]>e)
    e=arr[i];
    int ans=0;
    int mid;
    while(e>=s)
    {
        mid = s +( e-s)/2;
        if(isPossible(arr,n,mid,target))
        {
            ans = mid;
            s = mid+1;
        }
        else
        e = mid-1;
    }
    return ans;
}
int main()
{
    int arr[]={15,8,18,6};
    int n=4;
    
    int target=30;
    
    cout<<getMaxHight(arr,n,target);

    return 0;
}