#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int x : numbers) {
        // even / odd
        if (x % 2 == 0) even++;
        else odd++;

        // positive / negative
        if (x > 0) positive++;
        else if (x < 0) negative++;
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";

    return 0;
}
