#include<iostream>

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
 cin>>n;//how many values?
 int arr[n];
 for(i=0; i<n; i++){
    cin>>arr[i];
 }
  bubble_sort(arr,n);

  for(i=0; i<n; i++){
    cout << arr[i]<<" ";
  }
  cout<<endl;
}
