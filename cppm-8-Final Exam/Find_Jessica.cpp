#include <bits/stdc++.h>
using namespace std;

string Jessica(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    string S;
    getline(cin, S);
    cout << Jessica(S) << endl;

    return 0;
};
