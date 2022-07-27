// TC Operation = O(N) as naive approach
// TC Operation = O(logN) using union by rank 
// Best = Avg = O(Alpha(N)) , which is amoterized time complexity where "Alpha" grows very slowly. 
// In fact it grows so slows that it doesn't exceed 4 that almost comes out to be constant.

// TC  = O ( N )

const ll N=1e5+10;

vector<ll>parent(N),siz(N);

ll findParent(ll i){
    
    if (i == parent[i]) return i;
    return parent[i] = findParent(parent[i]);
}

void unionNodes(ll a, ll b) {

    ll parent_a = findParent(a);
    ll parent_b = findParent(b);
    if(parent_a==parent_b)
        return;
    if(siz[parent_a]>=siz[parent_b]){
        swap(parent_a,parent_b);
    }
    siz[parent_b]+=siz[parent_a];
    parent[parent_a]=parent_b;
    return;
}

void clearDsu(ll n){
    
    for(ll i=0;i<=n;i++){
        parent[i]=i;
        siz[i]=1;
    }
}
