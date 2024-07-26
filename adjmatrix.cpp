#include<bits/stdc++.h>
using namespace std;

//Ajacency matrix 
//undirected unweighted graph
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int vertices,edges;
	cin>>vertices>>edges;

	vector<vector<bool> > AdjMatrix(vertices,vector<bool>(vertices,0));

	int u,v;
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v;
		AdjMatrix[u][v]=1;
		AdjMatrix[v][u]=1;
	}
	for(int i=0;i<vertices;i++)
	{
		for (int j = 0; j < vertices; ++j)
		{
			cout<<AdjMatrix[i][j]<<" ";
		}
		cout<<endl;
	}

	
   

	return 0;
}