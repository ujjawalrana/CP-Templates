// This will give us the number of divisors of a number

vector<ll>divisors(n+1,0);
for(ll i=1;i<=n;i++){
 	for(ll j=i;j<=n;j+=i){
  		divisors[j]+=1;
 	}
}
