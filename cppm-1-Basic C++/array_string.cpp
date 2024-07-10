#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char s[100];
    // cin >> s;
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
    // cout << strlen(s) << endl;
    return 0;
}