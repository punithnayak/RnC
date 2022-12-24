#include <bits/stdc++.h>
using namespace std;

 void BFS(vector<int> adj[],int v,int s){
 	bool Visited[v+1];
 	queue<int> q;
 	for(int i=0;i<v;i++){
 		Visited[i]=false;

 	}
 	Visited[s]=true;
 	q.push(s);
 	while(q.empty()==false){
 		int u =q.front();
 		q.pop();
 		cout<<u<<" ";
 		for(int v:adj[u])
 			if (Visited[v]==false){
 				Visited[v]=true;
 				q.push(v);
 			}
 	}
 }
 void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);

}
void printList(vector <int> adj[],int v){
	for (int i = 0; i < v; ++i)
	{
		for (auto x:adj[i]){
			cout<<x<<"\n";
		}
	}
}
 int main(int argc, char const *argv[])
 {
 	int v=4;
	vector <int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,0);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,0);
	addEdge(adj,2,1);
	addEdge(adj,3,1);
	printList(adj,v);
	BFS(adj,v,0);
 	return 0;
 }