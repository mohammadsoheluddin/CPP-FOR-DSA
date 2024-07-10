// #include <iostream>
// using namespace std;

// void sortString(string &s)
// {
//     int n = s.length();
//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = i + 1; j < n; ++j)
//         {
//             if (s[i] > s[j])
//             {
//                 char temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;

//     sortString(S);

//     cout << S << endl;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;

//     sort(S.begin(), S.end());

//     cout << S << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void countingSort(string &s)
{
    vector<int> count(26, 0); // Initialize count array to store frequency of characters

    // Count frequency of each character
    for (char c : s)
    {
        count[c - 'a']++;
    }

    // Update string with sorted characters
    int index = 0;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < count[i]; ++j)
        {
            s[index++] = 'a' + i;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    countingSort(S);

    cout << S << endl;

    return 0;
}
