#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  ios::sync_with_stdio(false);
  
    int n;
    cin >> n;
    vector <int> review(n);
    for(int i = 0; i < n; i++)
    {
        cin >> review[i];
    }
    for(int x : review)
    {
        if(x == 1)
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY \n";
}