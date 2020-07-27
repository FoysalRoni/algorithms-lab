#include<bits/stdc++.h>
using namespace std;

void longestIncreasingSub(int arr[],int n)
{
    string paths[n];
    int sizes[n];
    for(int i=0; i<n; i++)
    {
        sizes[i] = 1;
        paths[i] =to_string(arr[i])+" ";
    }

    int maxl = 1;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]>=arr[j] && sizes[i]<sizes[j]+1)
            {
                sizes[i] = sizes[j]+1;
                paths[i] = paths[j] +to_string(arr[i])+" ";
                if(maxl<sizes[i])
                {
                    maxl = sizes[i];
                }
            }
        }
    }
    for(int i=0; i<n ; i++)
    {
        if(sizes[i]==maxl)
        {

            cout<<"LIS = "<<paths[i];
            break;
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Data Size: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    longestIncreasingSub(arr,n);
}
