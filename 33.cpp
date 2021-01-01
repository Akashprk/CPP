/* method(function) overriding or hidding in c++ and the function overloading is worked then the all the function define in only one class and the name of function is same but different parameter pass*/

#include<iostream>
using namespace std;

class car{

    public:
    void shiftGear(){ cout<<"inside cars" ; }
    void f2(){}
};

class sportscar:public car{
     public:
    void shiftGear(){cout<<"inside sportscar";}  // method overridding
    void f2(int x){}   // method hidding
};

int main(){
    sportscar obj;
    obj.shiftGear(); // sportscar
   // obj.gearChange(); //sportscar
   // obj.f2();        //error
   // obj.f2(4);   //B

    return 0;
}