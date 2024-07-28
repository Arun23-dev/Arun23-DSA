#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int arr[]={4,3,2,1,2,7,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int missing=-1;
	int repeated=-1;

   for(int i=0;i<size;i++)
   {
   	arr[i]=arr[i]-1;
   }
   //just for the imagination
   for(int i=0;i<size;i++)
   {
   	cout<<arr[i]<<" ";
   }
   for(int i=0;i<size;i++)
   {
   	arr[arr[i]]=1;

   }
   cout<<endl;
    for(int i=0;i<size;i++)
   {
   	cout<<arr[i]<<" ";
   }


   

	return 0;
}