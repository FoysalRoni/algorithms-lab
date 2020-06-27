#include<bits/stdc++.h>

using namespace std;

int Partition(int arr[], int lb, int ub)
{
   int pivot = arr[lb];
   int start = lb;
   int ending = ub;

   while(start<ending)
   {
       while(arr[start]<=pivot){
        start++;
       }
       while(arr[ending]>pivot){
        ending--;
       }
       if(start<ending)
       {
           swap(arr[start],arr[ending]);
       }
   }
   swap(arr[lb],arr[ending]);
   return ending;
}
void QuickSort(int arr[], int lb, int ub)
{
    int lock;
    if(lb<ub){
        lock = Partition(arr,lb,ub);
        QuickSort(arr,lb,lock-1);
        QuickSort(arr,lock+1,ub);
    }
}

int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
     cin>>arr[i];
 }
 int lb,ub;
 lb = 0;
 ub = n-1;
 QuickSort(arr,lb,ub);
 for(int i=0; i<n; i++)
 {
     cout<<arr[i]<<" ";
 }
 cout<<endl;
}
