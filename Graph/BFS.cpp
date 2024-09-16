#include<bits/stdc++.h>
using namespace std;

//breadth first search algorithm
void bfs(int node,vector<int>&vis,vector<int>adj[]){

	vis[node]=1;
	queue<int>q;
	q.push(node);

	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<" ";

		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it]=1;
				q.push(it);
			}
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
			bfs(i,vis,adj);
		}
	}

}