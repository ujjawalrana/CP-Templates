vector<vector<ll>>a(1e5+10),rev(1e5+10),scc;
vector<ll>topo;
vector<bool>vis(1e5+10,false);

// Find Strongly connected components of a directed graph in linear time
// a is graph
// rev is reverse graph
// 'scc' store all scc.

// Finding topological order
void find_topo(ll pos){
    vis[pos]=1;
    for(auto i:a[pos]){
        if(!vis[i])
            find_topo(i);
    }
    topo.pb(pos);
}

// Finding SCC
// store_scc stores a single scc
void find_scc(ll pos,vector<ll>&store_scc){
    store_scc.pb(pos);
    vis[pos]=1;
    for(auto i:rev[pos]){
        if(!vis[i])
            find_scc(i,store_scc);
    }
}

void solve(){   

    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            find_topo(i);
        }
    }

    reverse(all(topo));
    
    for(ll i=0;i<=n;i++){
        vis[i]=0;
    }

    for(ll i=0;i<n;i++){
        vector<ll>store_scc;
        if(!vis[topo[i]])
            find_scc(topo[i],store_scc);
        scc.pb(store_scc);     
    }

}
