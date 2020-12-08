vector<vector<int>> arr(200005,vector<int>());
vector<int> visited(200005,0);
vector<int> in(200005,0);
vector<int> on(200005,0);
int counter;
int bridges;
void dfs(int node,int par)
{
    visited[node]=1;
    in[node]=counter;
    on[node]=counter;
    counter++;
    for(auto child: arr[node])
    {
        if(child==par)
            continue;
        if(visited[child]==1)
        {
            on[node]=min(on[node],in[child]);
        }
        else
        {
            dfs(child,node);
            if(on[child]>in[node])
            {
                cout<<node<<" "<<child<<endl;
                bridges++;
            }
            on[node]=min(on[node],on[child]);
        }
    }
}
