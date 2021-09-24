// Time complexity- VE

void bellman_ford(){

	ll n,m;
	cin>>n>>m;

	vector<vector<ll>>a;
	for(ll i=0;i<m;i++){
		ll x,y,z;
		cin>>x>>y>>z;
		a.pb({x,y,z});
	}

	vector<ll>dis(n+1,inf);
	dis[1]=0;

	ll x=-1;
	for(ll i=0;i<n;i++){
		x=-1;

		for(ll j=0;j<m;j++){
			if(dis[a[j][1]]>dis[a[j][0]]+a[j][2]){
				dis[a[j][1]]=dis[a[j][0]]+a[j][2];
				x=1;
			}
		}
	}

	if(x==-1){
		cout<<"No cycle detected";
	}
    
    // distance array contain the minimum distance fron source to the 'ith' node.
}
