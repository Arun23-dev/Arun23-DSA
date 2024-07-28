#include<bits/stdc++.h>
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr) {
	while(d)
	{
		int temp=arr[0];
		int i;
		for(i=1;i<arr.size();i++)
		{
			arr[i-1]=arr[i];
		}
		arr[i-1]=temp;
		d--;
	}
	return arr;
}
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> arr1{1,2,3,4,5};
vector<int> result=	rotateLeft(2,arr1);
		for(int i=0;i<result.size();i++)
		{
			cout<<result[i]<<" ";

		}
	 	
	
   

	return 0;
}