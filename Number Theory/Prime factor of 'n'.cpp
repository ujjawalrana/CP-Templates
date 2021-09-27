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
            prime.pb(i);
            while(n%i==0)
                n/=i;
        }
    }

    if(n>1)prime.pb(n);
}


// copied from cp algorithm
// this leaves us with only 33.3% percent of the numbers to check
// Testing phase is pending

vector<long long> trial_division3(long long n) {
    vector<long long> factorization;
    for (int d : {2, 3, 5}) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    static array<int, 8> increments = {4, 2, 4, 2, 4, 6, 2, 6};
    int i = 0;
    for (long long d = 7; d * d <= n; d += increments[i++]) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
        if (i == 8)
            i = 0;
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
