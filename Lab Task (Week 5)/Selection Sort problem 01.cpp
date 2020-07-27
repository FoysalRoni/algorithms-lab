#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[],int n)
{
    int i,j,min,temp;
    for(i=0; i<n-1; i++)
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
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"Sorted Data: ";
    for(i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Result: "<<arr[1]<<"^"<<arr[n-1]<<" = "<<(long)(pow(arr[1],arr[n-1]))<<endl;
}
