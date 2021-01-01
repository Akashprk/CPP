// object pointer in c++

#include<iostream>
using namespace std;

class Box{
   int l,b,h;
   public:
   void setDimension(int x, int y, int z){
       l=x;b=y;h=z;
   }
   void showDimension(){
       cout<<" l = "<<l<<" b = "<<b<<" h = "<<h;
   }
};

int main(){
    Box *p,smallbox;  
    p=&smallbox;           
   // smallbox.setDimension(2,3,4); /* here is two way to first use the object smallbox and second use the pointer*/
    //smallbox.showDimension();
 
  p->setDimension(1,2,3);
  p->showDimension();


    return 0;
}