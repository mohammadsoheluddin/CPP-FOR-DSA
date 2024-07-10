#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int flag = 0;
        for (int i = 0; i < N - 2; i++)
        {
            for (int j = i + 1; j < N - 1; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N, S;
//         cin >> N >> S;

//         int A[N];
//         for (int i = 0; i < N; i++)
//         {
//             cin >> A[i];
//         }

//         int flag = 0;
//         for (int i = 0; i < N - 2 && !flag; i++)
//         {
//             for (int j = i + 1; j < N - 1 && !flag; j++)
//             {
//                 for (int k = j + 1; k < N && !flag; k++)
//                 {
//                     if (A[i] + A[j] + A[k] == S)
//                     {
//                         flag = 1;
//                     }
//                 }
//             }
//         }
//         if (flag == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {

//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
