#include<bits/stdc++.h>
using namespace std;

//depth first search algorithm
void dfs(int node,vector<int>&vis,vector<int>adj[]){

	cout<<node<<" ";

	vis[node]=1;

	for(auto it:adj[node]){
		//if not visited then vising the nodes of the graph
		if(!vis[it]){
			dfs(it,vis,adj);
		}
	}
}
int main(){

    //node/vertex and edges
	int n,m;
	cin>>n>>m;

	vector<int>adj[n];

	for(int i=0;i<m;i++){
        
        //adjacent elements 
		int u,v;
		cin>>u>>v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}
    
    //visited array for visiting the elements
	vector<int>vis(n);

    //for the components checking
	for(int i=0;i<n;i++){
		if(!vis[i]){
			dfs(i,vis,adj);
		}
	}

}