//https://codeforces.com/contest/266/submission/119280981
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  
       int n,t;
       cin>>n>>t;
       string str;
       cin>>str;
       for(int j=0;j<t;j++)
       {
           for(int i=0;i<n;i++)
           {
               if(str[i]=='B'&&str[i+1]=='G'&&i<n-1) 
               {
                   swap(str[i],str[i+1]); 
                   i++;
               }    
               
           }
       }
     cout<<str;
    return 0;
}
