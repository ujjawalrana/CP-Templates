// if a and m is not coprime then we can use extended euclidean algorithm
// if a and m is coprime then we need to use farmat's little theorem 

ll extended_gcd(ll a,ll b,ll& x,ll& y){
    if(b==0){
        x=1,y=0; 
        return a;
    }

    ll x1,y1,g=extended_gcd(b,a%b,x1,y1);

    x=y1,y=x1-y1*(a/b);
    return g;
}

ll inv_mod_extended(ll a,ll m){ 
    ll x,y; 
    extended_gcd(a,m,x,y);
  
    // x is modular inverse 
    return x;
}
