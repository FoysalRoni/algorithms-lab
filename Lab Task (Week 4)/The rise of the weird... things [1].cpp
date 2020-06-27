#include<bits/stdc++.h>

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
    int n,i,j=0,k=0,x,odds=0,evens=0;
    cin>>n;
    int even[n],odd[n];
    for(i=0; i<n; i++)
    {
        cin>>x;

        if(x%2==0)
        {
            even[j] = x;
            evens+=x;
            j++;
        }
        else{
            odd[k] = x;
            odds+=x;
            k++;
        }
    }
    insertion_sort(even,j);
    insertion_sort(odd,k);
    for(i=0; i<j; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<evens<<" ";
    for(i=0; i<k; i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<odds<<endl;

}
