#include<iostream>
#include<queue>
using namespace std;
queue <int> q;
void bfs(int k,int **adj,int *visited,int n)
{
    cout<<k+1;
    visited[k]=1;
    q.push(k);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(adj[curr][i]==1&&visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                cout<<i+1;
            }
        }

    }

}
int main()
{
    int n,k,**adj,*visited;
    cin>>n;
    adj=new int*[n];
    for(int i=0;i<n;i++)
        adj[i]=new int[n];
    visited=new int[n];
    for(int i=0;i<n;i++)
        visited[i]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }
    }
    cin>>k;
    bfs(k-1,adj,visited,n);
    return 0;
}
