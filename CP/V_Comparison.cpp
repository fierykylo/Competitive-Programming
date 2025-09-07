#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);  // Ensure proper flushing

    int a , b;
    char c;
    cin >> a >> c >> b;

    if(c == '>')
    {
        (a > b) ? cout << "Right\n" : cout << "Wrong\n";
    }
    else if (c == '<')
    {
        (a < b) ? cout << "Right\n" : cout << "Wrong\n";
    }
    else if (c == '=')
    {
        (a == b) ? cout << "Right\n" : cout << "Wrong\n";
    }

    return 0;
}