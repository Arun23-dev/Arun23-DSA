#include<bits/stdc++.h>
using namespace std;

//Ajacency matrix 
//undirected weighted graph
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int vertices,edges;
	cin>>vertices>>edges;

	vector<vector<int> > AdjMatrix(vertices,vector<int>(vertices,0));

	int u,v,weight;
	for(int i=0;i<edges;i++)
	{
		cin>>u>>v>>weight;
		AdjMatrix[u][v]=weight;
		AdjMatrix[v][u]=weight;
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