#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   int t;
   cin>>t;
   while(t--)
   {
       int x,y;
       cin>>x>>y;
       double z=10*(y-x)/(100-y);
       int a=ceil(z);
       cout<<a<<endl;
       
   }



   
   

   return 0;
}