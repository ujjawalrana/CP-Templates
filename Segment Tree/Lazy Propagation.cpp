
vector<ll>a(1e5+4),seg(4*(1e5+2)),lazy(4*(1e5+2));

void build(ll index,ll start,ll end){

    if(start==end){
        seg[index]=a[start]; return;
    }
    
    ll mid=(start+end)/2;
    build(2*index,start,mid);
    build(2*index+1,mid+1,end);

    // operation
    seg[index]=max(seg[2*index],seg[2*index]+1);

}

// Range update
void update(ll index,ll start,ll end,ll qstart,ll qend,ll num){
    
    // lazy propagation
    if(lazy[index]){
        seg[index]+=(lazy[index]*(start-end+1));
        if(start!=end){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index]=0;
    }
    
    if(qstart<=start and qend>=end){
        seg[index]+=(num*(end-start+1));
        if(start!=end){
            // lazy propagation
            lazy[2*index]+=num;
            lazy[2*index+1]+=num;
        }
        return;
    }

    if(qstart>end or qend<start)return;

    ll mid=start+(end-start)/2;
    update(2*index,start,mid,qstart,qend,num);
    update(2*index+1,mid+1,end,qstart,qend,num);

    // Operation
    seg[index]=seg[2*index]+seg[2*index+1];
}

// Position query
ll query(ll index,ll start,ll end,ll pos){

    // lazy propagation
    if(lazy[index]){
        seg[index]+=(lazy[index]*(end-start+1));
        if(start!=end){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index]=0;
    }

    if(start==end and start==pos) return seg[index];
    if(start>pos or end<pos) return 0;
    

    ll l=0,r=0;
    ll mid=start+(end-start)/2;

    // operation
    if(pos<=mid) l+=query(2*index,start,mid,pos);
    else r+=query(2*index+1,mid+1,end,pos);

    return l+r;
}
