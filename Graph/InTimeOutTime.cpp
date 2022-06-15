// 'a' is graph and 'pos' is a node
// Use for check that a node exist in a subtree or not
// if inTime of child is greater than inTime of parent and outTIme of child is smaller than outTime of parent then the child is in subtree of parent.

ll timer=0;

void InOutdfs(vector<vector<ll>>&a,vector<bool>&vis,ll pos){
  
    vis[pos]=true;
    InTime[pos]=timer++;
  
    for(auto i:a[pos]){
        if(!vis[i]){
          dfs(a,vis,i);
        }
    }
  
    OutTime[pos]=times++;
}
