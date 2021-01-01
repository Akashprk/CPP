// Destructor in c++

#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:

     ~complex(){
         cout<<"Destructor"<<endl;
     }
};

void fun(){
    complex obj;
}

int main(){

    fun();

    return 0 ;
}
