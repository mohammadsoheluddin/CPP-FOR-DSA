#include <iostream>
#include <algorithm>
using namespace std;

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    my_swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}