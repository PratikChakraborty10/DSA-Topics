#include<iostream>
using namespace std;
class Student {
    public: 
        int age;
        int rollNo;
};
int main() {
    Student s1;
    Student s2;
    s1.age = 21;
    s1.rollNo = 68;
    s2.age = 20;
    s2.rollNo = 92;

    cout << "Student Roll No." << " " << "Student Age" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "1. " << s1.rollNo << "\t\t\t" << s1.age << endl;
    cout << "2. " << s2.rollNo << "\t\t\t" << s2.age << endl;
    return 0;

}