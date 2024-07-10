#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_result = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = a[i] + a[j] + (j - i);
                if (result < min_result)
                {
                    min_result = result;
                }
            }
        }

        cout << min_result << endl;
    }

    return 0;
}
