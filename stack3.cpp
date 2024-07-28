#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int target)
{
		if(st.size()==0)
	{
		st.push(target);
		return ;
	}
		
	int temp=st.top();
	st.pop();


	//recursive call
	solve(st,target);

	//BT
	st.push(temp);



}
void insertAtBottom(stack<int> &st)
{
	//checking the stack is empty
	if(st.empty())
	{
		cout<<"Stack is empty,can't "<<endl;
		return ;

	}
	int target=st.top();
	st.pop();
	solve(st,target);


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



insertAtBottom(st); 
while(!st.empty())
{
	cout<<st.top()<<endl;;
	st.pop();

} 
	return 0;
}