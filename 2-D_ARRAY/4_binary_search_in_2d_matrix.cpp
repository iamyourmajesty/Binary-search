#include <bits/stdc++.h>
using namespace std;
pair <int,int> search(vector<vector<int>> arr,int n,int m,int target)
{
   
    int s=0;
    int e=n*m-1;
    int mid,row,col;
    
    while(e>=s)
    {
        mid = s + (e-s)/2;
        
        row=mid/m;
        col=mid%m;
        
        if(arr[row][col]==target)
        return {row,col};
        else if(target>arr[row][col])
        s = mid +1;
        else
        e = mid -1;
    }
    return {-1,-1};
    
}
int main()
{
   std::vector<vector<int>> arr={{5,6,9,12},{13,23,25,26},{34,36,37,43},{45,47,49,56}};
    int n=arr.size();
    int m=arr[0].size();
    
    int target=49;
    pair <int,int> ans;
    ans=search(arr,n,m,target);
    cout<<ans.first<<" "<<ans.second;

   
    return 0;
}


/*
method 1 :- brute force o(n^2) 
method 2 :- iterate through each row and apply bin search 0(n*logn)
method 3 :- find row by binary search and apply bin search to find element too 0(logn * logm) 
method 4 :- row = mid/m , col = mid%m 0(log(n*m))
*/