#define NCR

const long long int N=1e5+10;

vector<ll>fact(N);
void get_fact(ll m){
    fact[0]=1;
    for(ll i=1;i<N;i++) 
        fact[i]=(fact[i-1]*i)%m;
}

ll pow(ll a,ll b,ll m){
    ll ans=1;
    while(b){
        if(b%2) ans=(ans*a)%m;
        b/=2,a=(a*a)%m;
    }
    return ans;
}
ll inv_mod(ll a,ll m){return pow(a,m-2,m);}
ll ncrMod(ll n,ll r,ll m){
    if(n<r) return 0;
    return (fact[n]*inv_mod(fact[r],m)%m*inv_mod(fact[n-r],m)%m)%m;
}

// call get_fact(mod) from solve or main function 
