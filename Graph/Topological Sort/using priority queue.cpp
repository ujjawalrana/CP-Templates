bool topological_sort(vector<vector<ll>>&a,vector<ll>&in,ll n){
  
    // 'a' is graph and 'n' is no. of nodes
    // 'in' representes the indegree of a node
    // 'topo' contains the sorted topological order
    // using minimum priority queue so that we can get the lexicographically smallest order
  
    priority_queue<ll,vector<ll>,greater<ll>>q;
    for(ll i=1;i<=n;i++){
        if(in[i]==0)q.push(i);
    }
    
    while(!q.empty()){
        ll u=q.top();
        q.pop();

        topo.pb(u);
        for(auto i:a[u]){
            in[i]--;
            if(in[i]==0)q.push(i);
        }
    }
    return (size(topo)==n);
}
