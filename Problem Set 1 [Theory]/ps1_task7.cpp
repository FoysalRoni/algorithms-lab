#include<bits/stdc++.h>

using namespace std;

 int gcd(int a,int b)
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
    int a,b,res;
    cin >> a >> b;

    res = gcd(a,b);

    cout << res << endl;
}
