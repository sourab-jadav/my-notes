#include<bits/stdc++.h>

using namespace std;

void dfsrec(vector<int>adj[],int s,bool visited[])
{
	 visited[s]=true;
	cout<<s<<" ";
	for(int u:adj[s])
	{
		if(visited[u]==false)
		{
			dfsrec(adj,u,visited);
		}
	}
}

void dfs(vector<int>adj[],int v,int s)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		{
			dfsrec(adj,i,visited);
		}
	}

}

int main(){
	cout<<"hello world"<<endl;
	return 0;
}
