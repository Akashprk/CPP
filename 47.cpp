// type conversion primitive type to class type in c++

#include<iostream>
using namespace std;


class complex {
    private:
    int a,b;
    public:
   complex(){}
    complex(int k){
        a=k;b=0;
    }
  void  setData(int x, int y){
          a=x;b=y;
    }
  void showData(){
      cout<<"a = "<<a<<" b = "<<b;

  }

};

int main(){
    complex c1;
    int x=11;
    c1=x;
    c1.showData();
    return 0 ;
}