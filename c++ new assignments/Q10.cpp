//11. Implement a program for Friend function which reverse the given numbers.
#include<iostream>
using namespace std;
class Q10
{
	private:
		int n,i;
	public:
		Q10()
		{
			cout<<"Enter Number to Display reverse: ";
			cin>>n;
		}
		friend void show(Q10);
};
void show(Q10 s)
{
	 cout<<"The reverse the Entered number : ";
			for(s.i=s.n;s.i>0;s.i=s.i/10)
			{
				cout<<s.i%10;
			}
}
int main()
{
    Q10 s;
    show(s);
}
