#include<bits/stdc++.h>
using namespace std;

double fractional_knapsack(double weight[],double profit[], int n,int m)
{
    double val = 0;
    int i;

    for(i=0; i<n; i++)
    {
        if(m>0)
        {
            if(weight[i]<=m)
            {
                m = m-weight[i];
                val = val+profit[i];
            }
            else
            {
                int temp = weight[i]-m;
                val = val + profit[i] * (double)(m/weight[i]);
                m = m-(weight[i]-temp);
            }
        }


    }
    return val;
}

void bubble_sort(double weight[],double profit[], double density[], int n)
{
    int i,j,temp,flag;
    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-i-1; j++)
        {
            if(density[j]<density[j+1])
            {
                swap(density[j],density[j+1]);
                swap(weight[j],weight[j+1]);
                swap(profit[j],profit[j+1]);
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
    int n,i,k;
    cout<<"Total Item: ";
    cin>>n;
    double weight[n], profit[n];
    double density[n];
    for(i=0; i<n; i++)
    {
        cin>>weight[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>profit[i];
    }
    cout<<"Knapsack Weight: ";
    cin>>k;
    for(i=0; i<n; i++)
    {
        density[i] = profit[i]/weight[i];
    }
    bubble_sort(weight,profit,density,n);
    double res = fractional_knapsack(weight,profit,n,k);
    cout<<"Maximum Profit: "<<res<<" Tk"<<endl;
}
