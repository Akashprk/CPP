// virtual function in c++

#include<iostream>
using namespace std;

class A{
    public:
     void f1(){
        cout<<"this is simple machanism";
    }
};

class B:public A{
    public:
    void f1(){
           cout<<"this is dynamic machanism";
    }
    void f2(){

    }
};

int main(){

    A *p,o1;
    B o2;
    p=&o2;
    p->f1(); // late binding with the help of virtual keyword  
    return 0;
}