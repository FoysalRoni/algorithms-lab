#include<bits/stdc++.h>
using namespace std;

int firstFitDecreasing(int arr[],int n,int c)
{
    int res = 0;
    int i,j,bin[n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<res; j++)
        {
            if(bin[j]>=arr[i])
            {
                bin[j] = bin[j]-arr[i];
                break;
            }
        }
        if(j==res)
        {
            bin[res] = c-arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int capacity;
    cin>>capacity;
    sort(arr, arr+n, greater<int>());

    int res = firstFitDecreasing(arr,n,capacity);
    cout<<res;
}
