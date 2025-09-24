#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if( ((n) & (n - 1) == 0) || ((n / 6) & (n - 1) == 0))
        {
            cout << -1;
        }
        


    }
}

/*
18 / 6 = 3
3 / 6 < 1 yes multiply by 2 
6 / 6 == 1
*/