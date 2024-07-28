//order maintainence not required
#include<bits/stdc++.h>
using namespace std;

//let's create the array of the 
void shiftnum(int arr[],int size)
	{	
		for(int i=0;i<size-1;i++)
		{


			for(int j=i+1;j<size;j++)
			{
				if(arr[j])
				{
					swap(arr[j],arr[j-1]);
				}
			}
		}

}
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
//cout<<"Hello";
	int arr[]={1,-1,3,5,-3,5,6,-9};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	 shiftnum(arr,size);
	 cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}


	
   

	return 0;
}