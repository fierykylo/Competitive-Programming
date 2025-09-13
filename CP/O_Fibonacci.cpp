#include <bits/stdc++.h>
using namespace std;
/*
int fibonacci(int n)
{
    // base case fib 0 and recursive funtion will return n + f(n - 1)
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);

}
int main(void) 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int num; 
    cin >> num;
    cout << fibonacci(num) << endl;
}
    */

#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n; 
  cin >> n;
  if(n == 1)
  {
    cout << 0;
    return 0;
  }
  if(n == 2)
  {
    cout << 1;
    return 0;
  }
   long long a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << b;
}