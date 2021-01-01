// inheritance in c++


#include<iostream>
using namespace std;

class A{
    private:
    int a ;
    protected:
    void setValue(int x){
        a=x;
       cout<<a;
    }
};

class B:public A{
      public:
      void setData(int y){
        setValue(y);
      }
};

int main(){
    
    B obj1,obj2;
    obj1.setData(3);
return 0;
}