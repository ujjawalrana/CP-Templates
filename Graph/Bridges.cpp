// 'a' is graph and 'pos' is a node

// if inTime of child is greater than inTime of parent and outTIme of child is smaller than outTime of parent then the child is in subtree of parent.

ll timer=0;

void InOutdfs(vector<vector<ll>>&a,vector<bool>&vis,ll pos,ll parent){
  
    vis[pos]=true;
    
    // InTime is time when we visit the node first time
    // LowTIme[pos] shows the highest ancestor at which this node is connected if LowTime equal to InTime then there is no connection b/w the current node and ancestor.
    
    InTime[pos] = LowTime[pos] = timer;
    timer+=1;
  
    for(auto i:a[pos]){
        if(pos==parent)continue;
        else if(vis[i]){
            
            // if this child is connected to its ancestor then we will update the LowTime.
            LowTime[pos]=min(LowTime[pos],LowTime[i]);
        }
        else if(!vis[i]){
            dfs(a,vis,i,pos);
            
            // If the LowTime is greater than InTime it means that child is not connected to any of its ancestor 
            // but if LowTIme is less than InTime it means child is connected to its ancestor and this edge can't be bridge.
            
            if(InTime[pos]<LowTime[i]){
                // means edge from pos -> i is a bridge   
            }
            
            // If the child is connect to any of its ancestor is means the current node also have connection with that ancestor and we will update the LowTIme of current node.        
            LowTime[pos]=min(LowTime[pos],LowTime[i]);
        }   
    }
}

