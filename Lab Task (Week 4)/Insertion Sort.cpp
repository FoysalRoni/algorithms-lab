#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n){
  int i,j,temp;
  for(i=1; i<n; i++){
    temp = arr[i];
    j = i-1;
    while(j>=0 && arr[j]>temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
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
  insertion_sort(arr,n);

  for(i=0; i<n; i++){
    cout << arr[i]<<" ";
  }
  cout<<endl;

}

