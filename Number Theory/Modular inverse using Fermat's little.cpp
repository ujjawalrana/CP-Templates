// Note that a and m being relative prime is the condition for the modular inverse to exist .
// if a and m is not coprime then we can't use fermat's little 
// if a amd m is not coprime then we have to use Extended Euclidean algorithm for modular inverse

ll pow(ll n,ll p,ll m){
    // return n^p % m
  
    ll ans=1;
  
    while(p){
        if(p%2) ans=(ans*n)%m;
        p/=2,n=(n*n)%m;
    }
    return ans;
}

ll inv_mod(ll n,ll m){
    // Fermat little theorem
    return pow(n,m-2,m);
}
