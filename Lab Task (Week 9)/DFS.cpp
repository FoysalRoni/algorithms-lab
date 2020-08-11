#include<bits/stdc++.h>
using namespace std;
int adj[1000][1000];
int visited[1000];

void DFS(int i, int n)
{
    int j;
    cout<<i<<endl;
    visited[i]=1;

    for(j=0; j<n; j++)
    {
        if(!visited[j]&&adj[i][j]==1)
        {
            DFS(j,n);
        }
    }
}

int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
     for(int j=0; j<n; j++)
     {
         cin>>adj[i][j];
     }
  }
  for(int i=0; i<n; i++)
  {
      visited[i] = 0;
  }
  DFS(0,n);
}
