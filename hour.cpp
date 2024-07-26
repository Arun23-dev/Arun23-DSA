#include <bits/stdc++.h>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int totalcost=0;
        int cuponcost=x;
        int aftercupon=cuponcost;
        for(int i=0;i<n;i++)
        {
            totalcost+=a[i];
            if(a[i]>=y)
            {
                aftercupon=aftercupon+(a[i]-y);
            }
            
        }
        if(aftercupon<totalcost)
        cout<<"COUPON"<<endl;
        else
        cout<<"NO COUPON"<<endl;
        // your code goes here
    }

}
