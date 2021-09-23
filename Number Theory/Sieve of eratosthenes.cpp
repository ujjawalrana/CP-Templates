// Time complexity nloglogn
// return prime no. till 'n'

#define SIEVE 

const long long int N=1e7+10;
vector<bool>prime(N,true);
vector<ll>store;

void sieve(){ 

    prime[0]=prime[1]=false;

    for(ll i=2;i<=N;i++){
        if(prime[i]){
            for(ll j=i*i;j<=N;j+=i) prime[j]=false;
            store.pb(i);
        }
    }
}
