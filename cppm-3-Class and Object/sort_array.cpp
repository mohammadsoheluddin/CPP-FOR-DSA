#include <iostream>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int> a(n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}