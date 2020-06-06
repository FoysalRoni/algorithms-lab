#include <bits\stdc++.h>

using namespace std;

 long long int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        if(a>b)
        {
            gcd(b,a%b);
        }
        else
        {
            gcd(a,b%a);
        }
    }

}

int main()
{
   long long int a,b,res,lcm;
    cin >> a >> b;

    res = gcd(a,b);
    lcm = (a*b)/res;

    cout << lcm << endl;
}
