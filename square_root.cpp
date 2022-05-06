#include<bits/stdc++.h>
using namespace std;
int square_root(int n)
{
    int ans=0;
    int s=0;
    int e=n-1;
    int mid;
    while(e>=s)
    {
        mid = s + (e-s)/2;
        if(mid * mid == n)
        return mid;
        else if(mid * mid > n)
        e = mid -1;
        else 
        {
            ans = mid;
            s = mid+1;
        }

    }
    return ans;
}
int main()
{
    //let n be +ve number
    int n=55;
    cout<<square_root(n);
    return 0;
}