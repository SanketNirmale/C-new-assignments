// 3. Implement a program to display Student Details with class and object concept.Details sholud contain roll number, name,address and Percentage.
#include<iostream>
using namespace std;

class Student{
    private :
        int rollNo;
        char name[20], address[50];
        float percentage;
    public :
        void get(){
            cout<<"\nenter the Student Details : \nRollno : ";
            cin>>rollNo;
            cout<<"Name : ";
            cin>>name;
            cout<<"Address : ";
            cin>>address;
            cout<<"percentage : ";
            cin>>percentage;
        }
        void display(){
            cout<<"\nthe Student Details : \n Rollno : "<<rollNo;
            cout<<"\n Name : "<<name<<"\n Address : "<<address;
            cout<<"\n percentage : "<<percentage;
        }
};
int main(){
    Student s;
    s.get();
    s.display();
}
