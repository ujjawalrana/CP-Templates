ll ncr(ll n,ll r){
    ll ans=1;
    for(ll i=1;i<=r;i++)
        ans=(ans*(n+1-i))/i;
    return ans;
}
