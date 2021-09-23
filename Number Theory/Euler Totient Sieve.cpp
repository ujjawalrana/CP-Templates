// for finding the coprime no of 'n' 
ll coprime(ll n){
    
    ll ans=n;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            ans-=(ans/i);
        }
    }

    if(n>1) ans-=(ans/n);
    return ans;
}

// for finding the coprime no till 'nth' number 
vector<ll> coprime(ll n){

    vector<ll>store(n+1,0);
    for(ll i=1;i<=n;i++) store[i]=i;

    for(ll i=2;i<=n;i++){
        if(store[i]==i){
            for(ll j=i;j<=n;j+=i) store[j]-=(store[j]/i);
        }
    }

    return store;
}
