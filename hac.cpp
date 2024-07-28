#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	//lets rotate the array in clockwise

	int arr[]={1,2,3,4,5};
	int size=5;
	int store=arr[4];
	for(int i=0;i<5;i++)
	{
		arr[size-i]=arr[size-1-i];

	}	
     arr[0]=store;

     for(int i=0;i<5;i++)
     {
     	cout<<arr[i]<<" ";
     }

	return 0;
}