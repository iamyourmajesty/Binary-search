//https://www.spoj.com/problems/EKO/
#include<bits/stdc++.h>
using namespace std;

int is_possible(int arr[],int n,int m,int i)
{
      long long int temp=0;//we are taking long long to avoid overflow on spoj testcases
        for(int j=0;j<n;j++)
        {
            if(arr[j]>i)
            temp += arr[j]-i;
        }
        
        
        if(temp>=m)
        return true;
        
        return false;
}


int max_height(int arr[],int n ,int m)
{
    int maxi=*max_element(arr,arr+n);
    int ans=-1;
    
    int s=0;
    int e = maxi;
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if(is_possible(arr,n,m,mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        e =mid -1;
    }
    
    
    return ans;
}
int main()
{
    
int n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
    // max_height which we can set on chain saw
    int ans=max_height(arr,n,m);
    cout<<ans;
    return 0;
}

//time comp :- logm *  n
