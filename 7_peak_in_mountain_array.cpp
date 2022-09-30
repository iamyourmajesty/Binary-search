#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        int e=n-1;
        int mid;
        while(e>=s)
        {
            mid = s + (e-s)/2;
            if(mid!=0 and mid!=n-1 and arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
            return mid;
            else if(mid==0 or arr[mid]>arr[mid-1])
            s = mid +1;
            else
            e = mid-1;
        }
        return s;
    }
int main()
{
   vector <int> vec={1,3,4,7,2,0};
    
    cout<<peakIndexInMountainArray(vec);
    return 0;
}

// 3 5 3 2 0 
// a  testcase to go through dry run