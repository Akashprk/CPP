// shallow copy in c++

#include<iostream>
using namespace std;

class dummy{
      private:
      int a,b;
      public:
      void setData(int x, int y){
          a=x;b=y;
      }
      void showData(){
          cout<<"a = "<<a<<" b = "<<b;
      }
     
};

int main(){
     dummy d1;
     d1.setData(5,7);
     dummy d2=d1;
     d2.showData();
    return 0 ;
}