#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a + b - c == d)
    {
        cout << "YES\n";
    }
    else if (a + b * c == d)
    {
        cout << "YES\n";
    }
    else if (a - b + c == d)
    {
        cout << "YES\n";
    }
    else if (a - b * c == d)
    {
        cout << "YES\n";
    }
    else if (a * b + c == d)
    {
        cout << "YES\n";
    }
    else if (a * b - c == d)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}