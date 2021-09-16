// This will give the sum of divisors of a number

vector<ll>sum(n+1,0);
for(ll i=1;i<=n;i++){
 	for(ll j=i;j<=n;j+=i){
  		sum[j]+=i;
 	}
}
