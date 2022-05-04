#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,6,7,8,34,78,86};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int ans=-1;
    //applay binary search
    int start=0;
    int end=n-1;
    int mid;

    while(end>=start)
    {
        mid=start + (end-start)/2;

        if(arr[mid]==target)
        {
            ans = mid;
            break;
        }
        else if(target>arr[mid])
        start =mid +1;
        else
        end=mid -1;
    }
    cout<<ans;
    return 0;
}
// do leetcode problem 704