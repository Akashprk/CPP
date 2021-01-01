/* abstract class in c++ , A abstract class in which containing virtual function  and we can't make object*/

#include<iostream>
using namespace std;

class person{
    public:
    virtual void fun()=0; // pure virtual function
    void f1();
};

class student:public person{
    public:
    void fun();

};