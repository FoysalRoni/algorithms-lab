#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[],int n,int t)
{
    int i,j,min,temp;
    for(i=0; i<t; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int n,i,t;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"t=";
    cin>>t;
    selection_sort(arr,n,t);
    cout<<"After "<<t<<" Times Array: ";
    for(i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
