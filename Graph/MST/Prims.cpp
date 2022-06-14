// DENSE GRAPH:  T=O(V^2)
// SPARSE GRAPH: T=O(Elog(V))
    
ll prism_algo(vector<vector<pair<ll,ll>>> &a,ll n){
  
    vector<ll> vis(n+1,0);
    ll ans=0;
  
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>> > q;
    q.push({0,1});
  
    while(!q.empty()){
        ll parent=q.top().ss, wt=q.top().ff;
        q.pop();

        if(vis[parent]) continue;
        vis[parent]=1,ans+=wt;
      
        for(auto child:a[parent]){
            if(!vis[child.ss]){
                q.push(child);
            }
        }
    }
  
    return ans;
}
