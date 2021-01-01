// class type to primitive type conversion in c++

#include<iostream>
using namespace std;

class complex{
   private:
   int a,b;
   public:
   void setData(int x, int y){
       a=x;b=y;
   }
   void showData(){
       cout<<"a = "<<a<<" b = "<<b<<endl;
   }
   operator int(){
       return(a);
   }
};

int main(){
    complex c1;
    c1.setData(3,2);
    c1.showData();
    int x;
    x=c1;
    
    cout<<"x = "<<x;
    return 0 ;
}