DFSRec(adj,s,Visited,parent){
	Visited[s]=true;

	for every adjecent u of s{
		if(visited[u]==false)
			if(DFSRec(adj,u,Visited,s)==true)
				return true;
			else if(u1=parent)
				return true;
	}
	return false;
}
DFS(adj,v){
	Visited[v]={false,false,false,false};
	for (int i = 0; i < v; ++i)
	{
		if(visited[i]==false)
			if(DFSRec(adj,i,Visited,-1)==true)
				return true
	}
	return false;
}