#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<=n; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib[n];

}
int main()
{
  int n,t,k=0,i;
  cout<<"Test Case: ";
  cin>>t;
  for(i=0; i<t; i++)
  {

      cout<<"Number"<<" "<<++k<<": ";
      cin>>n;
      int res = fibo(n);
      cout<<"Result:"<<endl;
      cout<<"Fibonacci Number: "<<k<<": "<<res<<"\n\n";
  }

}
