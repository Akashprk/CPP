// scope resolution operator in c++ 

#include<iostream>
using namespace std;

class complex{

    private:
    int a ,b;
    public:
     void set_data(int , int);
     void show_data(){
         cout<<endl<<"a = "<<a<<" b = "<<b;
     }
};

void complex:: set_data(int x, int y ){ // here membership level is used
    a=x; b=y;
}

int main(){

complex c1;
c1.set_data(7,9);
c1.show_data();

    return 0 ;
}