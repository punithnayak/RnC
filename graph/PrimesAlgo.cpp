int primMST(vector<int> graph[],int V){
	int key[],res=0;
	fill(key,key+V,INT_MAX);
	key[0]=0;
	bool mSet[v]={false};
	for (int count = 0; count < V; ++count)
	{
		int u=-1;
		for (int i = 0; i < V; ++i)
			if(!mSet[i]&&(u==-1 || key[i]<key[u]))
				u=i;
		mSet[u]=true;
		res=res+key[u];
		for (int v = 0; v < V; ++v)
		{
				if(graph[u][v!=0 && !mSet[v]])
					key[v]=min(key[v],graph[u][v]);
		}
	}
	return res;
}