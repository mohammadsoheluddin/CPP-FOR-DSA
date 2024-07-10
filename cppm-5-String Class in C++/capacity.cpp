#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    string m = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    // cout << m.capacity() << endl;
    string l = "Hello";
    // cout << l << endl;
    l.clear();
    // cout << l << endl;
    // cout << l.size() << endl;
    string x = "Hello";
    // x.clear();
    // if (x.size() == 0)
    if (x.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
    return 0;
}