#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr1[n] , arr2[n];

     for(int i = 0; i < n; i++)
     {
        cin >> arr1[i];
     }
     for(int i = 0; i < n; i++)
     {
        cin >> arr2[i];
     }

     sort(arr1, arr1 + n);
     sort(arr2, arr2 + n);

     for(int i = 0; i < n; i++)
     {
        if(arr1[i] != arr2[i])
        {
            cout << "no\n";
            return 0;
        }
     }
     cout << "yes\n";
     
}