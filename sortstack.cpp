#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int smallest)
{
	if(st.size==0)
	{
		return ;
	}
		
	int temp=st.top();
	st.pop();
   
   if(temp<smallest)
    solve(st,smallest);
    else
    solve(st,temp)

	//recursive call
	

	//BT
	st.push(temp);
	}




void sort(stack<int> &st)
{
	//checking the stack is empty
	if(st.empty())
	{
		cout<<"Stack is empty,can't  be sorted"<<endl;
		return ;

	}
	int smallest=st.top();
	st.pop();
	solve(st,smallest);


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
	return 0
;}