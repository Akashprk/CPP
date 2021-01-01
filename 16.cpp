// constructor overloading

#include<iostream>
using namespace std;

class complex
{
    private:
     int a,b;
    public:
     
     complex(int x, int y){ //Parameterized Constructors
         a=x;b=y;
         cout<<a<<b<<endl;
     }
     complex(int k){
        a=k;
        cout<<a<<endl;
     }
     complex(){ // default constructor

     }
    
};

int main(){

    complex c1(3,2),c2=7,c3;

    return 0 ;
}