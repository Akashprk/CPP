// uninary operator overloading 

#include<iostream>
using namespace std;

class complex{
 private:
  int a ,b ;
 public: 
  void set_data(int x , int y){
        a=x;b=y;
          }
  void showData(){
      cout <<"\na= "<<a<<" b= "<<b;
  }
    complex operator -(){
           complex temp;
           temp.a=-a;
           temp.b=-b;
           return(temp);
    }
};

int main(){

   complex c1,c2;
   c1.set_data(4,3);
   c2=-c1; // uninary operator overloading
   c2.showData();
    return 0;
}