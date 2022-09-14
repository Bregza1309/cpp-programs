#include<iostream>
#include<memory>
#include<cstring>
using namespace std;
//linked list of students
struct Students{
    string firstname;
    string lastname;

    shared_ptr<Students> next_student;
};
int main(){
    Students myStudents;
    char userDec;
    cout<<"Enter your students details :\n";
    while(true){
        for(Students * student = &myStudents,int i{1} ; student != 0;student->next_student , i++ ){
            cout<<"Student #"<<i<<" : Firstname -> ";
            cin>>student
            cout<<"Student #"<<i<<" : Lastname -> "<<student->lastname<<endl;
            student->next_student = 0;
        }
        
    }
}