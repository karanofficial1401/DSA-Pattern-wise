// class 
// class ke andr mai data and function bhi daal skta hu
// class is user defined data type
// class is Blueprint for creating objects


// object
// It is an entity that has a state and behaviour
// Anything that exist in physical world
// It is an instance of class
// It is a real world entity

#include<iostream>
using namespace std;

class Student{
    // public:      // public means hum class ke bahar bhi access kr skte hai 
    private:        
    string name;
    int age;
    int roll_number;
    string grade;


    // Function Getter and Setter
    public:
    void setname(string s){
        if(s.size()==0){      
            cout<<"Invalid name";   
        }
        name = s;
    }
    void setage(int a){
        if(a<0 || a>100){
            cout<<"Invalid age";
        }
        age = a;
    }
    void setroll_number(int r){
        roll_number = r;
    }
    void setgrade(string s){
        grade = s;
    }

    void getname(){
        cout<<name<<endl;
    }    
    void getage(){
        cout<<age<<endl;
    }    
    // void getroll_number(){
    //     cout<<roll_number<<endl;
    // }    
    int getroll_number(){
        return roll_number;
    }
    string getgrade(int pin){
        if(pin==123){
            return grade;

            return" ";
        }
    }    

};
int main(){
    Student S1;
    S1.setname("");
    S1.setage(21);
    S1.setroll_number(52);
    S1.setgrade("A+");

    // S1.getgrade();
    S1.getname();
    cout<<S1.getroll_number()<<endl;
    cout<<S1.getgrade(123);

}