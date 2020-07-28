#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int *L, int left, int *R, int right)
{
    int i,j,k;
    i=0;
    j=0;
    k=0;

    while(i<left && j<right){
      if(L[i]<R[j]){
        arr[k] = L[i];
        i++;
      }else{
        arr[k] = R[j];
        j++;
      }
      k++;
    }
    while(i<left){
        arr[k++] = L[i++];
    }
    while(j<right){
        arr[k++] = R[j++];
    }
}

void mergeSort(int *arr, int n)
{
    int mid,i,*L,*R;
    if(n<2) return;

    mid = n/2;

    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n-mid)*sizeof(int));

    for(i=0; i<mid; i++)
    {
        L[i] = arr[i];
    }
    for(i=mid; i<n; i++)
    {
        R[i-mid] = arr[i];
    }
    mergeSort(L,mid);
    mergeSort(R,n-mid);
    Merge(arr,L,mid,R,n-mid);
    free(L);
    free(R);

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
 mergeSort(arr,n);
 cout<<"Sort List: ";
 int sum = 0,d,sum1=0;
 for(i=0; i<n; i++)
 {
     cout<<arr[i]<<" ";
     sum = sum+arr[i];

 }
 cout<<endl;
 cout<<"Sum: "<<sum<<endl;
 while(sum!=0)
 {
     d = sum%10;
     sum1 = sum1+d;
     sum = sum/10;
 }
 cout<<"Digit Sum: "<<sum1<<endl;
}
