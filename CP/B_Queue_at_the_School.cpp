#include <bits/stdc++.h>
using namespace std;
// count the pairs first 
// second loop for iterating 
// swap without immediate reswap
int main(void) 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n , t;
  cin >> n >> t;
  string s;
  cin >> s;
  // outer loop = time steps
    for (int round = 0; round < t; round++) {
        // inner loop = positions in the string
        for (int i = 0; i < n - 1; /* update i yourself */) 
        {
            
            // check if current + next char form "BG"
            if (s[i] == 'B'&& s[i + 1] == 'G') 
            {
                swap(s[i] ,s[i + 1]);
                i += 2;


                // skip ahead so you don’t reswap immediately
            } else 
            {
                i++;
            }

        }
    }

    cout << s << "\n";
}