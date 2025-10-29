#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    cout << "How tall is the pyramid ? : \n";
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "ts so tuff dawg \n";
}
