#include<bits/stdc++.h>
using namespace std;
int pivot_index(int arr[],int n)
{
    int s=0;
    int e = n-1;
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if(arr[mid]>=arr[0] and arr[mid]>=arr[n-1])
        s = mid +1;
        else
        e =mid -1;

    }
    return s;
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n = sizeof(arr)/4;
    int pi = pivot_index(arr,n);
    cout<<pi;
    return 0;
}