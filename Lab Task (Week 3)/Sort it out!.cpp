#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n,i,j,flag,temp;
 cin>>n;
 int arr[n],arr2[n];

 for(i=0; i<n; i++)
 {
     cin>>arr[i];
     arr2[i] = i;
 }

 for(i=0; i<n-1; i++)
 {
     flag = 0;
     for(j=0; j<n-i-1; j++)
     {
      if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = 1;
        temp = arr2[j];
        arr2[j] = arr2[j+1];
        arr2[j+1] = temp;
      }
     }
     if(flag==0)
     {
         break;
     }
 }
 for(i=0; i<n; i++)
 {
     cout<<arr2[i]<<" ";
 }
 cout<<endl;
}
