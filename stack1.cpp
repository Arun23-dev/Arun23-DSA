#include<bits/stdc++.h>
using namespace std;
void middle(stack<int> &st,int totalsize)
{
	if(st.size()==0)
		return ;
	if(totalsize/2+1==st.size())
	{
		cout<<"Middle element of the stack is "<<st.top();
		return;
	}

	int temp=st.top();
	st.pop();


	//recursive call
	middle(st,totalsize);

	//BT
	st.push(temp);


}
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
st.push(70);
int totalsize=st.size();
middle(st,totalsize);  
	return 0;
}