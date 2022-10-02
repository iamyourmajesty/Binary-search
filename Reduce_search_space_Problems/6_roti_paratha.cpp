// https://www.spoj.com/problems/PRATA/

#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int n,int paratha_req,int x)
{
    // x time may kitna paratha bnegaa 
    int paratha_cooked=0;
    for(int i=0;i<n;i++)
    {
        int temp=0,k=0,t=1;
        
        
        while( (temp + (t*arr[i]) ) <= x)
        {
            temp += t*arr[i];
            t++;
            paratha_cooked++;
            
        }
        
        
        
    }
  if(paratha_cooked >= paratha_req) return true;
  
  return false;
}
int min_time_req(int arr[],int n,int paratha_req)
{
    int r = *min_element(arr,arr+n);
    int maxi = ( r * paratha_req * (paratha_req + 1) )/2;
    
    
    int s=0;
    int e=maxi;
    int mid,ans=-1;
    while(e>=s)
    {
    	mid = s+ (e-s)/2;
    	if(is_possible(arr,n,paratha_req,mid))
        {
        	ans=mid;
        	e=mid-1;
        }
        else
        s = mid +1;
    }
    return ans;
    
    
   
}

int main()
{
    int arr[]= {1,2,3,4};
    int n=4;
    int paratha_req= 10;
    cout<<min_time_req(arr,n,paratha_req);
    
    
    // int t1;
    // cin>>t1;
    // while(t1--)
    // {
    // 	int paratha_req,n;
    // 	cin>>paratha_req>>n;
    // 	int arr[n];
    // 	for(int i=0;i<n;i++)
    // 	cin>>arr[i];
    	
    // 	cout<<min_time_req(arr,n,paratha_req)<<endl;
    // }
    
    
    return 0;
}


