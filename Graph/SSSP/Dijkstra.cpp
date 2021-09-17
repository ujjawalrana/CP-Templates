// Time complexity v+Elogv

void dijkstra(){

    ll n,m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>a(n+1);
    
    for(ll i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        a[x].pb({y,z});
        a[y].pb({x,z});
    }
    
    vector<ll>dis(n+1,inf), parent(n+1,-1);
    
    // first is distance and second is node
    set<pair<ll,ll>> q;

    q.insert({0,1}); 
    dis[1]=0;
    
    while(!q.empty()){
        
        ll v=q.begin()->ss;
        q.erase(q.begin());

        for(auto i:a[v]){
            ll to=i.ff;
            ll len=i.ss;

            if(dis[v]+len < dis[to]) {
                q.erase({dis[to],to});
                dis[to] = dis[v]+len;
                parent[to] = v;
                q.insert({dis[v]+len, to});
            }
        }
    }

    // way from node-1 to node-n
    vector<ll> ans;
    if (dis[n]==inf){
        cout << -1; return;
    }
    
    while(n!=-1){
        ans.pb(n);
        n=parent[n];
    }
    reverse(all(ans));
    
    // 'ans' vector contain path from node-1 to node-n
}
