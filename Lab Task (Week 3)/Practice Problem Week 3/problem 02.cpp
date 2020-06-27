#include<iostream>

using namespace std;

int linearsearch(int arr[],int n,int x)
{
    int i,index=-1;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            index = i;
            break;
        }
    }
    return index;

}

int main()
{
    int n,res,x,i;
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Search = ";
    cin >> x;  //element x that want to search

    res = linearsearch(arr,n,x);

    if(res==-1)
    {
        cout<<"Product not available"<<endl;
    }
    else
    {
        cout << "Position =  "<<res<<" Row"<<endl;
    }

}
