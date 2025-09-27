#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string upper;
    getline(cin, upper);

    int upcase{} , lowcase{};

    for (char x : upper)
    {
        if (isupper(x))
            upcase++;
        else if (islower(x))
            lowcase++;
    }

    if (upcase > lowcase) {
        for (char &c : upper) {
            c = toupper(c);
        }
    } else {
        for (char &c : upper) {
            c = tolower(c);
        }
    }

    cout << upper << "\n";
}