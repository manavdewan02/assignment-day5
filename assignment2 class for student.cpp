#include <iostream>
using namespace std;
class student{
    int rollNumber;
    string nameOfStudent;
    string course;

    public:
        void setdetails(int r,string n,string c){
            rollNumber=r;
            nameOfStudent=n;
            course=c;
        }
        void getdetails(){
            cout << "Roll number of student: " << rollNumber << endl;
            cout << "Name of student: " << nameOfStudent << endl;
            cout << "Course of student: " << course << endl; 
        }
};
int main(){
    student s1,s2;
    s1.setdetails(123,"Amit","Btech CSE");
    s2.setdetails(124,"Arjun","MBA");
    cout << "Details of first student: " << endl;
    s1.getdetails();
    cout << "Details of second student: " << endl;
    s2.getdetails();
    return 0;
}