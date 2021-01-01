// static member in c++
// by default value of static value is zero .

#include<iostream>
using namespace std;

class account{
    private:
     int balance ; // Instance member variable
     static float roi; // static member variable or class variable
    public:
     void setBalance(int b){
         balance=b;
     }
     static void setRoi(float r){ // static member function
         roi=r;
     }
};
float account:: roi=3.5f;
int main(){

account a1,a2;
a1.setRoi(4.5f); /*there are 2 ways to access the static member fun*/
account::setRoi(4.5f);

    return 0 ;
}