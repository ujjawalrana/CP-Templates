// This will give the sum of divisors of a number

vector<ll>sum(1e7+1,0);

void help(ll n){
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            sum[j]+=i;
        }
    }
}
