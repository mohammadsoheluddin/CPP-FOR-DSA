#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // stringstream ss(s);
    stringstream ss;
    ss << s; // From s to ss group
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
        cout << word << endl;
    }
    cout << cnt << endl;
    // cout << s << endl;
    return 0;
}