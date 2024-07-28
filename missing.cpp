#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int arr[]={1,2,3,2,4,7,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int missing=-1;
	int repeated=-1;
	vector<int>count(size,0);

    for(int i=0;i<size;i++)
    {
    	count[(arr[i]-1)]++;
    }
    for(int i=0;i<size;i++)
    {
    	if(count[i]==2)
    	{

    		repeated=i+1;
    		break;
    	}
    	

    }
     for(int i=0;i<size;i++)
    {
    	if(count[i]==0){

    		missing=i+1;
    		break;
    	}
    	

    }
    cout<<repeated<<endl;
    cout<<missing<<endl;

   

	return 0;
}