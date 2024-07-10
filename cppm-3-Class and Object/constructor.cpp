#include <algorithm>
#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        this->roll = r;
        this->cls = c;
        this->gpa = g;
    }
};
int main()
{
    Student rahim(29, 9, 5.05);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    Student karim(29, 9, 5.05);
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}