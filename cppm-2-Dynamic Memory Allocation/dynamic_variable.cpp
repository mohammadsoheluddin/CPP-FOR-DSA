#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    cout << "address of a from fun: " << a << endl;
    cout << "value of *a from fun: " << *a << endl;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout << "address of p from main: " << p << endl;
    cout << "value of *p from main: " << *p << endl;
    // in x = 10;
    // int *a = new int;
    // *a = 10;
    // cout << a << endl;
    // cout << *a << endl;

    // float *f = new float;
    // *f = 10.545236;
    // cout << f << endl;
    // cout << *f << endl;
    // return 0;
}