// Time complexity logn

ll pow(ll n,ll p,ll m){
    // n^p % m
    
    ll ans=1;
    while(p){
        if(p%2) ans=(ans*n)%m;
        p/=2,n=(n*n)%m;
    }
    return ans;
}
