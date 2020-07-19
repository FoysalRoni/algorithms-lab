#include<bits/stdc++.h>
using namespace std;

int knapSack(int wt[],int val[], int W, int n)
{
    int i,M[n+1][W+1],w;

    for(i=0; i<=n; i++)
    {
       for(w=0; w<=W; w++)
       {
           if(i==0 || w==0)
           {
               M[i][w]= 0;
           }
           else if(wt[i]<=w)
           {
               M[i][w] = max(val[i]+M[i-1][w-wt[i]],M[i-1][w]);
           }
           else{
            M[i][w] = M[i-1][w];
           }
       }
    }
    return M[n][W];
}

void bubble_sort(int wt[],int val[], int n)
{
    int i,j,temp,flag;
    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-i-1; j++)
        {
            if(wt[j]>wt[j+1])
            {
                swap(wt[j],wt[j+1]);
                swap(val[j],val[j+1]);
                flag = 1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{
    int n,i,j,W;
    cout<<"Total Items: ";
    cin>>n;
    int wt[n+1],val[n+1];
    wt[0] = 0;
    val[0] = 0;

    for(i=1; i<=n; i++)
    {
        cin>>wt[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>val[i];
    }
    cout<<"Knapsack weight: ";
    cin>>W;
    bubble_sort(wt,val,n+1);
    int res = knapSack(wt,val,W,n);

    cout<<"Maximum Profit: "<<res<<endl;



}
