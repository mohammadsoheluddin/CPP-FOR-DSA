#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a;
    long long int b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    // int a = 20000;
    // long long int b = (long long)int(a);

    char c;
    cin >> c;
    cout << c << endl;
    int ascii = int(c);
    cout << ascii << endl;
    cout << int(c) << endl;

    return 0;
}