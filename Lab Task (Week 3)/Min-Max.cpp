#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,sum=0;
    cin>>n;
    long long int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long int min = arr[0],max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<sum-max <<" "<<sum-min<<endl;

}


