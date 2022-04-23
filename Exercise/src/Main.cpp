#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
    string fullname;
    string studentnumbers;
    string majors;
    float GPA;
};

int main(int argc, char const *argv[])
{
    Student data1;
    data1.fullname = "Tatia Mahendra";
    data1.studentnumbers = "5024211073";
    data1.majors = "Fashion Designer";
    data1.GPA = 3.61;

    Student data2;
    data2.fullname = "M. Fathi Farhat";
    data2.studentnumbers = "5024211065";
    data2.majors = "Computer Engineering";
    data2.GPA = 3.53;

    cout << "Full Name Student 1: " << data1.fullname << endl;
    cout << "Registration Numbers Student 1: " << data1.studentnumbers << endl;
    cout << "Majors Student 1: " << data1.majors << endl;
    cout << "GPA Student 1: " << data1.GPA << endl;

    cout << "Full Name Student 2: " << data2.fullname << endl;
    cout << "Registration Numbers Student 2: " << data2.studentnumbers << endl;
    cout << "Majors Student 2: " << data2.majors << endl;
    cout << "GPA Student 2: " << data2.GPA << endl;

    return 0;
}