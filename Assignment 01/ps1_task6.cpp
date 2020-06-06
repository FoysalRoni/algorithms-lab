#include <iostream>

using namespace std;

int fibo(int n)
{
    int i,fib[n];

    fib[0] = 0;
    fib[1] = 1;


    for(i=2; i<=n; i++)
    {
        fib[i] = (fib[i-1]+fib[i-2])%10 ;
    }
    return fib[n];
}

int main()
{
    int n,number;

    cin >> n;

    number = fibo(n);

    cout << number << endl;

}
