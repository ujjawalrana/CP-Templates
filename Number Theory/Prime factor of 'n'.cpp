// Time complexity sqrt(n)
// find prime factor of 'n'

vector<ll>prime;
void prime_factor(ll n){
    
    if(n%2==0){
        prime.pb(2);
        while(n%2==0)
            n/=2;
    }

    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            prime.pb(2);
            while(n%i==0)
                n/=i;
        }
    }

    if(n>1)prime.pb(n);
}
