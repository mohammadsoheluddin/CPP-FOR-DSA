#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int minBetweenTwoValue = min(a, b);
    cout << "minBetweenTwoValue: " << minBetweenTwoValue << endl;

    int minAmongMultipleValue = min({a, b, c, d});
    cout << "minAmongMultipleValue: " << minAmongMultipleValue << endl;

    int maxBetweenTwoValue = max(a, b);
    cout << "maxBetweenTwoValue: " << maxBetweenTwoValue << endl;

    int maxAmongMutipleValue = max({a, b, c, d});
    cout << "maxAmongMultipleValue: " << maxAmongMutipleValue << endl;
    return 0;
}