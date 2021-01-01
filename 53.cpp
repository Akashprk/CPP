// namespace in c++

#include<iostream>
using namespace std;

namespace myspace {
          int a ;
          void f1();
          class A{
              public:
              void fun1();
          };
}

void myspace::f1(){
    cout<<"hello f1"<<endl;
}
void myspace::A::fun1(){
    cout<<"hello fun1"<<endl;
}

 using namespace myspace;
int main(){
     a=5;
     f1();
     A obj;
     obj.fun1();
    return 0;
}