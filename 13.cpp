// adding of  two complex number in c++

#include<iostream>
using namespace std;

class complex{

    private:
     int a,b; // instance member variable
    public:
     void set_data(int x, int y){ // instance member function
        a=x;b=y;
    }
     void show_data(){ // instance member function
        cout<<endl<<"a = "<<a<<" b = "<<b;
    }
     complex add(complex c){ //instace member function
      complex temp ; 
      temp.a = a+c.a;
      temp.b = b+c.b;
      return(temp);
    }
};


int main(){

    complex c1,c2,c3;
    c1.set_data(2,3); /* c1,c2,c3 are instance */
    c2.set_data(5,8);
    c3=c1.add(c2);
    c3.show_data();

    return 0 ;
}