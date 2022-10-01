//brute force 0(n*m)
#include<bits/stdc++.h>
using namespace std;
bool is_allocated(int arr[],int n,int mid,int m)
{
    int sum=0;
    int students=m;
    int student_count =1;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        sum += arr[i];
        else{
            student_count++;
            if(student_count>students || arr[i]>mid)
            return false;
            sum=arr[i];
        }
    }
    return true;
}
int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        int mini=*min_element(A,A+N);
        int sum=accumulate(A,A+N,0);
        for(int i=mini;i<=sum;i++)
        {
            if(is_allocated(A,N,i,M))
            return i;
        }
        return -1;
    }
int main()
{
   int N = 4;
   int A[] = {12,34,67,90};
   int M = 2;

   cout<<findPages(A,N,M);
    
    return 0;
}