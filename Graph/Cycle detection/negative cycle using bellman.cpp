// Time complexity EV
// Graph shoud be direced, then only we can use bellman ford

void bellman_ford(){

	ll n,m;
	cin>>n>>m;

	vector<vector<ll>>a;
	for(ll i=0;i<m;i++){
		ll x,y,z;
		cin>>x>>y>>z;
		a.pb({x,y,z});
	}

	vector<ll>parent(n+1,-1);
	vector<ll>dis(n+1,inf);

	dis[1]=0;
	ll x=-1;

	for(ll i=0;i<n;i++){
		x=-1;

		for(ll j=0;j<m;j++){

			if(dis[a[j][1]]>dis[a[j][0]]+a[j][2]){

				dis[a[j][1]]=dis[a[j][0]]+a[j][2];
				x=a[j][1];
				parent[a[j][1]]=a[j][0];
			}
		}
	}
 
	if(x==-1){
		cout<<"NO"; return;
	}

	// Finding Negative cycle

	cout<<"YES"; br;
	
	for(ll i=0;i<n;i++){
		x=parent[x];
	}

	vector<ll>ans;
	for(ll v=x;;v=parent[v]){
		ans.pb(v);
		if(v==x and size(ans)>1)break;
	}

	reverse(all(ans));
	for(auto i:ans){
		cout<<i<<" ";
	}

}
