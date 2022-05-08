#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n=6;
   int x=4,y=3;
   
   int ans;
   
   //up down movement calculated
   ans = 2*(n-1);
   
   int d1,d2;
   //cal d1
   int a,b,c,d;
   a = x - 1;
   b= y -1;
   c= n -x;
   d= n -y;
   
   d1=min(a,b) + min(c,d);
   
  // cal d2
  a = n-x;
  b=y-1;
  c=x-1;
  d=n-y;
  d2 = min(a,b) + min(c,d);
  
  ans += d1 + d2;
  cout<<ans<<endl;

    return 0;
}
// https://www.codechef.com/MAY221D/problems/QUEENATTACK