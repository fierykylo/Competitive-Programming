#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n , a , b;
        cin >> n >> a >> b;
        cout << ( (( n == a && a == b) || a + b +1 < n) ? "Yes" : "No") << endl;
    }
}

