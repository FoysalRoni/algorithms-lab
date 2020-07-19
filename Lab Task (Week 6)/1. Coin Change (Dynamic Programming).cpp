#include<bits/stdc++.h>
using namespace std;

int coin_change(int coin[],int n,int w)
{
    int M[w+1],i,j,minimum;
    M[0] = 0;
    for(i=1; i<=w; i++)
    {
        minimum = 100000;
        for(j=1; j<=n; j++)
        {
          if(i>=coin[j])
          {
              minimum = min(minimum, 1+M[i-coin[j]]);
          }
        }
        M[i] = minimum;
    }
     return M[w];
}

int main()
{
    int n,w,i;
    cin>>n;
    int coin[n+1];
    coin[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin>>coin[i];
    }
    cin>>w;
    int minimum = coin_change(coin,n+1,w);
    cout<<"Coin need: "<<minimum<<endl;
}
