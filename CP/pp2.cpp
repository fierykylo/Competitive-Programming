#include <bits/stdc++.h>
using namespace std;

// this pattern is called floyd's triangle

int main(void)
{
ios::sync_with_stdio(false);
        cin.tie(NULL);
        int num;
        cout << "Enter : \n";
        cin >> num;
        int number = 1;
        for(int i = 0; i < num; i++)
        {
            for(int j = 0; j <= i; j++,number++)
            {
                cout << number << " ";
            }
            cout << "\n";
        }
}