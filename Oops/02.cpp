#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_number;
    string grade;
};

int main(){ 
    Student *s = new Student;      //dyanamic memory Allacation
    (*s).name = "Karan";
    (*s).age = 21;
    (*s).roll_number = 52;
    (*s).grade = "A+";

    cout<<s->name<<" ";
    cout<<s->age<<" ";
    cout<<s->roll_number<<" ";
    cout<<s->grade<<" ";
}