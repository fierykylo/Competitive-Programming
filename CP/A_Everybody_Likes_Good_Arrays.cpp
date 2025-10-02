#include <bits/stdc++.h>
using namespace std;

int main(void)
{
        int t;
        cin >> t;
        while(t--)
        {
                int n{0}, count{0};
                cin >> n;
                int array[n];
                for(int i = 0; i < n; i++)
                {
                        cin >> array[i];
                }
                for(int j = 0; j < n - 1; j++)
                {
                         if ((array[j] % 2 == 0 && array[j+1] % 2 == 0) || 
                        (array[j] % 2 != 0 && array[j+1] % 2 != 0))
                        {
                                count++;
                        }
                }
                cout << count << "\n";
        }
}