// 7. Calculate volume of cube using parametrized constructor.
#include<iostream>
using namespace std;

class cube{
    private :
        double side;
    public:
        cube(double side1){
            this->side=side1;
        }
        double getSide(){
            return side;
        }
        double volume(){
            return(side*side*side);
        }
        
};

int main(){
    cube c1(2.34);
    cout << "\nThe side of the cube is: " << c1.getSide() << endl;
    cout << "\nThe volume of the first cube is : " << c1.volume() << endl;
}
