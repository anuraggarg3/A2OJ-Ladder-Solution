//https://codeforces.com/contest/339/submission/119279594
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  
     long long   int n,m;
       cin>>n>>m;
     
     long long int a[m];
      int count=0;
      for(long long int i=0;i<m;i++)
      {
          cin>>a[i];
      }
       for(long long int i=0;i<m;i++)
      {
      if (a[i]>a[i+1]&&i<m-1) count++;
      }
      long long x=count*n;
      cout<<x+a[m-1]-1;
   
    return 0;
}
