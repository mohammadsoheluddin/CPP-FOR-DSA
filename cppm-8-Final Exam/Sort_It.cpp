#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int total_marks_a = a.math_marks + a.eng_marks;
    int total_marks_b = b.math_marks + b.eng_marks;

    if (total_marks_a != total_marks_b)
        return total_marks_a > total_marks_b;
    else
        return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;

    Student students[100];
    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
