#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    char S[1000];
    while (cin.getline(S, sizeof(S)))
    {
        int n = strlen(S);
        sort(S, S + n);

        for (int i = 0; i < n; i++)
        {
            if (S[i] != ' ')
            {
                cout << S[i];
            }
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string S;
//     while (getline(cin, S))
//     {
//         int n = S.length();
//         for (int i = 0; i < n - 1; i++)
//         {
//             int minChar = i;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (S[j] < S[minChar])
//                 {
//                     minChar = j;
//                 }
//             }
//             if (minChar != i)
//             {
//                 char temp = S[i];
//                 S[i] = S[minChar];
//                 S[minChar] = temp;
//             }
//         }
//         cout << S << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char S[100001];

//     while (cin.getline(S, sizeof(S)))
//     {
//         int n = strlen(S);

//         for (int i = 0; i < n - 1; i++)
//         {
//             int minChar = i;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (S[j] < S[minChar])
//                 {
//                     minChar = j;
//                 }
//             }
//             if (minChar != i)
//             {
//                 char temp = S[i];
//                 S[i] = S[minChar];
//                 S[minChar] = temp;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (S[i] != ' ')
//             {
//                 cout << S[i];
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string S;

//     while (getline(cin, S))
//     {
//         // Remove spaces from the input string
//         string cleanedS;
//         for (char ch : S)
//         {
//             if (ch != ' ')
//             {                   // Check if the character is not a space
//                 cleanedS += ch; // Append non-space characters to the cleaned string
//             }
//         }

//         // Perform selection sort on the cleaned string
//         int n = cleanedS.length();
//         for (int i = 0; i < n - 1; i++)
//         {
//             int minChar = i;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (cleanedS[j] < cleanedS[minChar])
//                 {
//                     minChar = j;
//                 }
//             }
//             if (minChar != i)
//             {
//                 char temp = cleanedS[i];
//                 cleanedS[i] = cleanedS[minChar];
//                 cleanedS[minChar] = temp;
//             }
//         }

//         cout << cleanedS << endl;
//     }

//     return 0;
// }
