// 8. calculate factorial of a given number using copy constructor.
#include<iostream>
using namespace std;
class fact
{
    private :   
        int n, i, facti;
    public:
        fact(int x){
            n=x;        //parameterized constructor
            facti=1;
        }
        fact(fact &x){
            n=x.n;      //copy constructor
            facti=1;
        }
        void calculate(){
            for(i=1; i<=n; i++){
                facti=facti*i;
            }
        }
        void display(){
            cout<<"\n Factorial : "<<facti;
        }
};
int main()
{
    int x;
    cout<<"\n Enter Value : ";
    cin>>x;
    fact f1(x);  
    fact f2(f1);  //copy constructor takes an object as an argument.
    f2.calculate();
    f2.display();
}