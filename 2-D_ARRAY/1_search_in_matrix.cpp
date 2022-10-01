#include<bits/stdc++.h>
using namespace std;
void Search(int arr[][4],int n,int m,int target)
{
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]==target)
        {
            cout<<i<<" "<<j;
            return;
        }
    }

   }
   cout<<"not found";
   return;
}
int main()
{
    int arr[3][4]={1,2,3,4,
                   5,6,7,8,
                   9,10,11,12};
    int n=3,m=4;
    int target=3;
    Search(arr,n,m,target);
    return 0;
}

/*
method 1 :- brute force o(n^2) 
method 2 :- iterate through each row and apply bin search 0(n*logn)
method 3 :- find row by binary search and apply bin search to find element too 0(logn * logm)
method 4 :- row = mid/m , col = mid%m 0(log(n*m))
*/