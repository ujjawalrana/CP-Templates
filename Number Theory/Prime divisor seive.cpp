// Time complexity nlogn

// return no of prime divisor till 'n'

vector<ll>divisors(n+1,0);
vector<bool>vis(n+1,false);

for(ll i=2;i<=n;i++){
    if(!vis[i]){
        for(ll j=i;j<=n;j+=i){
            divisors[j]+=1;
            vis[j]=1;
        }
    }
}
