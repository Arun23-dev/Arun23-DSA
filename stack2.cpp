#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int x)
{
	if(st.size()==0)
	{
		st.push(x);
		return ;
	}
		
	int temp=st.top();
	st.pop();


	//recursive call
	insertAtBottom(st,x);

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

insertAtBottom(st,0); 
while(!st.empty())
{
	cout<<st.top()<<endl;;
	st.pop();

} 
	return 0;
}