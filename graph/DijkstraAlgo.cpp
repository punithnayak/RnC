vector<int> dijkstra(vector<int> graph[],int V,int src){
	vector<int> dist(V,INT_MAX);
	disk[src]=0;
	vector<bool> fin(V,false);
	for(int count=0;count<V-1;count++){
		int u=-1;
		for (int i = 0; i < V; ++i)
			if(!fin[i]&&(u==-1||disk[i]<disk[u]))
				u=i;
			fin[i]=true;
			for(int v=0;v<V;v++){
				if(graph[u][v]!=0&& fin[v]==false)
					disk[v]=min(disk[v],disk[u]=graph[u][v])
			}
		
	}
	return disk;

}