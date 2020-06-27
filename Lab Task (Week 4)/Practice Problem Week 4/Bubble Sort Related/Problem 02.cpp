#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[],int n)
{
    int i,j,temp,flag;
    for(i=0; i<n-1; i++)
    {
        flag = 0;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
 int n,i;
 cout<<"Enter array size:";
 cin>>n;
 int arr[n],sum=0;
 cout<<"Enter data: ";
 for(i=0; i<n; i++){
    cin>>arr[i];
    sum = sum + arr[i];
 }
  bubble_sort(arr,n);
  cout<<"Ascending Order: ";
  for(i=0; i<n; i++){
    cout << arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Sum = "<<sum<<"\n";
}
