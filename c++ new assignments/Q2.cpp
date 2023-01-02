// 2. Implement a program for factorial with class.
#include<iostream>
using namespace std;

class factorial{
    private :
        int n;
    public :
        int get(){
            cout<<"\nenter number to find its factorial : ";
            cin>>n;
            return n;
        }
        int fact(int n){
            if(n==1 || n ==0 ){
                return 1;
            }
            return n*fact(n-1);
        }
};
int main(){
    factorial f;
    cout<<"the factorial : "<<f.fact(f.get());
}
