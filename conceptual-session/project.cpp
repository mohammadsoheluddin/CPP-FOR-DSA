#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

class Student
{
public:
    string name;
    int id;
    int bang;
    int eng;
    int math;

    int total;
    double avg;
    string gpa;
    int roll;
};
bool cmp <Student a, Student b)
{
    if (a.total > b.total)
        return true;
    else if (a.total < b.total)
        return false;
    else
    {
    }
};
int main()
{
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].id >> st[i].name >> st[i].bang >> st[i].eng >> st[i].math;
        st[i].total = st[i].bang + st[i].eng + st[i].math;
        st[i].avg = (double)st[i].total / 3;

        if (st[i].avg >= 80)
            st[i].gpa = "A+";
        else if (st[i].avg >= 70)
            st[i].gpa = "A";
        else if (st[i].avg >= 60)
            st[i].gpa = "A+";
        else if (st[i].avg >= 50)
            st[i].gpa = "A+";
    }
    return 0;
}