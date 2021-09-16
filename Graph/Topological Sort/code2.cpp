void topo_dfs(vector<vector<ll>>&a,vector<bool>&vis,vector<ll>&topo,ll pos){
  
    // 'a' is graph and 'pos' is a node
    // don't forget to reverse the 'topo' vector
    vis[pos]=true;
    for(auto i:a[pos]){
        if(!vis[i]){
          dfs(a,vis,i);
        }
    }
    topo.pb(pos);
}
