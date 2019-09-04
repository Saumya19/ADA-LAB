#include<iostream>
using namespace std;
void dfs(int v,int *visited,int ** adj,int n)
{

    cout<<v;
    visited[v]=1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
   if(adj[v][i]==1&&visited[i]==0)
    {
        dfs(i,visited,adj,n);
    }
    }

}
}
int main()
{
    int n,*visited,**adj;
    cout<<"enter the number of nodes:"<<endl;
    cin>>n;
    visited=new int[n];
    adj=new int*[n];
    for(int i=0;i<n;i++)
        adj[i]=new int[n];
    cout<<"enter the adjacency matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>adj[i][j];
        }

    }
    for(int i=0;i<n;i++)
        visited[i]=0;
    cout<<"the connected graphs are:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0){
        dfs(i,visited,adj,n);
        cout<<"\n";
        }
    }
return 0;
}


