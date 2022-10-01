#include<bits/stdc++.h>
using namespace std;
void Search(int arr[][4],int n,int m,int target)
{
    int start=0;
    int end=n-1;
    int mid;
    while(end>=start)
    {
        mid = start + (end-start)/2;

        if(arr[mid][0]<=target and arr[mid][m-1]>=target)
        {
            //row found 
            int row=mid;
            //apply binary search in found row
            int s= 0;
            int e=m-1;
            int m;
            while(e>=s)
            {
                m = s + (e-s)/2;
                if(arr[row][m]==target)
                {
                    int col = m;
                    cout<<row<<" "<<col;
                    return ;
                }
                else if(arr[row][m]<target)
                s = m +1;
                else
                e = m -1;

            }
            cout<<"not found";
            return;

        }
        else if(arr[mid][m-1]<target)
        start = mid +1;
        else
        end = mid -1;
    }
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