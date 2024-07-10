#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t)
    {
        string S, X;
        cin >> S >> X;

        int pos = S.find(X);

        while (pos < S.length())
        {
            S.replace(pos, X.length(), "#");
            pos = S.find(X, pos + 1);
        }
        cout << S << endl;
    }

    return 0;
}
