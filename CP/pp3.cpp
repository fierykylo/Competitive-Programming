#include <bits/stdc++.h>
using namespace std;

// this pattern is : hollow square

int main(void)
{
ios::sync_with_stdio(false);
        cin.tie(NULL);
        int num;
        cin >> num;
        int number = 1;
        for(int i = 0; i < num; i++)
        {
            if(i == 0 || i == num - 1)
            {
            for(int j = 0; j < num; j++,number++)
            {
                cout << "*";
            }
            cout << "\n";
            }
            else
            {
                cout << "*"; 
                for(int k = 0; k < num - 2; k++)
                {
                    cout << " ";
                }
                cout << "*";
                cout << "\n";
            }
        }
}