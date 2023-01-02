// 1. Implement a program for simple Arithmetic operation in cpp without using class.
#include<iostream>
using namespace std;

int main(){
    int a,b, choice;
    char ch;
	float d;
    do{
        cout<<"\nwhich operation do you want to perform \n1. addition\n2. subtraction";
        cout<<"\n3. multiplication\n4. division \nenter choice : ";
        cin>>choice;
        cout<<"\nenter the two numbers to perform operation : ";
        cin>>a>>b;
        switch (choice)
        {
        case 1:
            cout<<"The sum : "<<a+b;
            break;
        
        case 2:
            cout<<"The subtraction : "<<a-b;
            break;
        
        case 3:
            cout<<"The multiplication : "<<a*b;
            break;
        
        case 4:
        	 d = a/b;
            cout<<"The division : "<<d;
            break;
        
        default:
            break;
        }
        cout<<"\nDo you want to return to main menu ? y/n ";
        cin>>ch;
    }while(ch == 'y');
}
