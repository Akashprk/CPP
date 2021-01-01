// deep copy in c++

#include<iostream>
using namespace std;
class dummy{
      private:
      int a,b;
      int *p;
      public:
      dummy(){
          p = new int;
      }
      void setData(int x, int y,int z){
          a=x;b=y;*p=z;
      }
      void showData(){
          cout<<"a = "<<a<<" b = "<<b<<" c = "<<*p;
      }
      dummy (dummy &d){ //copy constructor
          a=d.a;b=d.b;
          p =new int;
         *p=*(d.p);
      }     
};

int main(){
     dummy d1;
     d1.setData(5,7,2);
     dummy d2=d1;
     d2.showData();
    return 0 ;
}