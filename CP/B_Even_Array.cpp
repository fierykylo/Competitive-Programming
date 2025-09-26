#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            int arr[n];
            for(int j = 0; j < n; j++)
                {
                    cin >> arr[j];
                }
            
                int even{0} , odd{0}, swaps{0};
            for(int k = 0; k < n; k++)
            {
                if(arr[k] % 2 == 0)
                    {
                        even++;
                    }
                else
                    {
                        odd ++;
                    }

                if((k % 2 == 0 && arr[k] % 2 != 0) || (k % 2 == 1 && arr[k] % 2 == 0))
                    {
                        swaps++;
                    }
            
            }
        if(n == 1)
        {
            cout << "-1" << endl;
        }
        else if(n % 2 == 0)
        {
          if(even == n /2 && odd == n / 2)
            {
                cout << swaps / 2 << endl;
            }
            else 
            {
            cout << "-1\n";
            }
        }
        else if((odd ==(n + 1) / 2 && even == n / 2) || (odd == n / 2 && even == (n + 1) / 2))
        {
            cout << swaps / 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        }
}