#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int x)
{
    int i,left,right,mid,res;
    left = 0;
    right = n-1;
    res = -1;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(x==arr[mid])
        {
            res=mid;
            left = mid+1;
        }
        else if(x<arr[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    return res;
}
int main()
{
    int n,i,res,x;

    cin>>n; //how many values in the list?

    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x; //value that want to search

    res = binarysearch(arr,n,x);
    if(res==-1)
    {
       cout<<"Item not found"<<endl;
    }
    else
    {
        cout<<"Last Occurrence: "<<res<<endl;
    }

}
