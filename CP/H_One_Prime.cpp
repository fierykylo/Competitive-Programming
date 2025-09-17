#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  if(t == 1 || t == 0)
  {
    cout << "NO" << endl;
    return 0;
  }
  for(int i = 2; i <= t / 2; i++)
  {
        if(t % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
  }
  cout << "YES\n";

}