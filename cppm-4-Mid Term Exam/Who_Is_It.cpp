#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;

    Student(int id, char *name, char section, int totalMarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int id1, id2, id3;
        char name1[101], name2[101], name3[101];
        char section1, section2, section3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> section1 >> marks1;
        cin >> id2 >> name2 >> section2 >> marks2;
        cin >> id3 >> name3 >> section3 >> marks3;

        int totalMarks1 = marks1;
        int totalMarks2 = marks2;
        int totalMarks3 = marks3;

        if (totalMarks2 > totalMarks1 || (totalMarks2 == totalMarks1 && id2 < id1))
        {
            totalMarks1 = totalMarks2;
            id1 = id2;
            strcpy(name1, name2);
            section1 = section2;
        }
        if (totalMarks3 > totalMarks1 || (totalMarks3 == totalMarks1 && id3 < id1))
        {
            totalMarks1 = totalMarks3;
            id1 = id3;
            strcpy(name1, name3);
            section1 = section3;
        }
        cout << id1 << " " << name1 << " " << section1 << " " << totalMarks1 << endl;
    }
    return 0;
}
