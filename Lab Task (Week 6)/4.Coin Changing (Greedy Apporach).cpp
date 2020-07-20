#include<bits/stdc++.h>
using namespace std;
void coin_change(int coins[], int n, int m)
{
   int cnt[n],i;
   memset(cnt,0,sizeof cnt);
   for(i=n-1;i>=0;i--)
   {
       if(m>=coins[i])
       {
           cnt[i]=m/coins[i];
           m=m%coins[i];
       }
   }
   if(m!=0)
        cout<<"Change is not possible"<<endl;
   else
   {
       cout<<"Coin need:"<<endl;
       for(i=n-1;i>=0;i--)
       {
           if(cnt[i]!=0)
               cout<<coins[i]<<" coin "<<cnt[i]<<" times"<<endl;
       }
   }
}

int main()
{
    int n,change;
    cin>>n;
    int coins[n];
    for(int i=0; i<n; i++)
    {
        cin>>coins[i];
    }
    sort(coins, coins+n);
    cin>>change;
    coin_change(coins,n,change);
    return 0;
}
