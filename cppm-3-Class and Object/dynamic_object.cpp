#include <iostream>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student *karim = new Student(5, 5, 5);
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    return 0;
}