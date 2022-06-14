// Each vertex belongs to exactly one of the 2 color(0/1)
// Each edge connects vertices of 2 different sets
// If the color of parent and child are same then return false else return true

bool dfs(ll pos,ll ok){
	vis[pos]=1;
	col[pos]=ok;

	for(auto i:a[pos]){
		if(!vis[i]){
			if(dfs(i,1-ok))
				return true;
			else return false;
		}
		else if(col[pos]==col[i])
			return false;
	}

	return true;
}

