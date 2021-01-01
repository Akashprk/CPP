// operator overloading and its is a compile time polymorphism
     
#include<iostream>
using namespace std;

class complex{
        private:
         int a , b;
        public:
         void set_data(int x,int y ){
             a=x,b=y;
         }
         void showData(){
             cout<<"\na= "<<a<<" b="<<b<<endl;
         }
         complex operator +(complex c){ /* all operator any valid expect size of and ternary(? :)*/
             complex temp ; 
             temp.a=a+c.b;
             temp.b=b+c.b;
             return(temp);
         }
};


int main(){

    complex c1,c2,c3;
    c1.set_data(4,2);
    c2.set_data(7,8);
    c3=c1+c2; // binary operator overloading
    c3.showData();
    return 0;
}