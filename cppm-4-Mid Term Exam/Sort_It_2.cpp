#include <iostream>
#include <algorithm>
using namespace std;

int *sort_it(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N, greater<int>());
    return A;
}

int main()
{
    int N;
    cin >> N;
    int *result = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
    return 0;
}
