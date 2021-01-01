// where use of private , protected and public visiblity mode use

#include<iostream>
using namespace std;

class Array{
    private:
     int a[10];
    public:
     void insert(int index , int value){
         a[index]=value;
     }
};

class stack :private Array{
     int top;
     public:
     void  push(int value){
         insert(top,value);
     }
};

int main(){

    stack s1;
    s1.push(31);
    s1.insert(2,56); // we can not inserted data direct on the stack;

    return 0 ;
}