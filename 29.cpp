// constructor and desconstructor in inheritance  in c++

#include<iostream>
using namespace std;

class A{
        int a ;
        public:
        A(int k ){
            a=k;
            cout<<"a = "<<a;
        }
        ~A()
        {}
};

class B:public A{
    int b;
    public:
    B(int x, int y):A(x){ // here for call the constructor need to call it
        b=y;
        cout<<" b = "<<b;
    }
    ~B() /* desconstructor call and compiler also call automatically parents desconstructor*/
    {}
};

int main(){
    B obj(7,9);
    return 0 ;
}