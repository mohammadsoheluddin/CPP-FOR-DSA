#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    if (S == '>' && A > B)
    {
        cout << "Right" << endl;
    }
    else if (S == '>' && A <= B)
    {
        cout << "Wrong" << endl;
    }
    else if (S == '<' && A < B)
    {
        cout << "Right" << endl;
    }
    else if (S == '<' && A >= B)
    {
        cout << "Wrong" << endl;
    }
    else if (S == '=' && A == B)
    {
        cout << "Right" << endl;
    }
    else if (S == '=' && A != B)
    {
        cout << "Wrong" << endl;
    }
    return 0;
}
