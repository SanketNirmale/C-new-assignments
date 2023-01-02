//10. Implement a program to find mean of 10 numbers by using Inline function.
#include <iostream>
using namespace std;
class Q9
{   
    private :
        int arr[10];
        float mean;
    public:
        void get();
        void getMean();
};
inline void Q9 :: get()
{
    cout<<"enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
} 
inline void Q9 ::getMean()
{
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum+=arr[i];
    }
    cout<<"Mean of ten numbers : "<<sum/10<<"\n" ;
}
  
int main()
{
    cout << "Program using inline function\n";
    Q9 s;
    s.get();
    s.getMean();
    return 0;
}
