//brute force
#include<bits/stdc++.h>
using namespace std;
int max_height(int arr[],int n ,int m)
{
    int maxi=*max_element(arr,arr+n);
    int ans=-1;
    for(int i=0;i<=maxi;i++)
    {
        int temp=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>i)
            temp += arr[j]-i;
        }
        
        
        if(temp>=m)
        ans=i;
        
        
    }
    return ans;
}
int main()
{
    //eko spos
    int arr[]={4 ,42 ,40, 26, 46};
    int n=5;
    int m=20;
    // max_height which we can set on chain saw
    int ans=max_height(arr,n,m);
    cout<<ans;
    return 0;
}


