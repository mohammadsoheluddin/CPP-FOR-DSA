#include <bits/stdc++.h>
using namespace std;

void reverseSections(string nm[], int cls[], char s[], int id[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

int main()
{
    int N;
    cin >> N;

    string nm[N];
    int cls[N];
    char s[N];
    int id[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];
    }

    reverseSections(nm, cls, s, id, N);

    for (int i = 0; i < N; i++)
    {
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }

    return 0;
}
