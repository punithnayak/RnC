void DFSRec(vector<int> aadj[],int s,bool visited[]){
	visited[s]=true;

	cout<<s<<" ";ifor(int u:adj[s])
	if(visited[u]==false)
		DFSRec(adj,u,Visited);
}

void DFS(vector<int> adj[],int v,int s){
	bool Visited[v];
	for(int i=0;i<v;i++){
		Visited[i]=false;
		DFSRec(adj,s,Visited);
	}
}