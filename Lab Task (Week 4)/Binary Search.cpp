#include<stdio.h>
int binarysearch(int arr[],int n,int x)
{
    int i,left,right,mid;
    left = 0;
    right = n-1;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(x==arr[mid])
        {
            return mid;
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
    return -1;
}
int main()
{
    int n,i,res,x;

   scanf("%d",&n); //how many values in the list?

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x); //value that want to search

    res = binarysearch(arr,n,x);
    if(res==-1)
    {
        printf("Value not found in the list\n");
    }
    else
    {
        printf("Value found\nThe position of the value is %d\n",res);
    }
    return 0;
}
