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
  int n;
  cout<<"Enter any number: ";
  cin>>n;
  int res = fibo(n);
  cout<<"Fibonacci Number: "<<res<<endl;
}
