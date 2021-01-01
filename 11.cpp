/* class and objects in c++ */

#include<iostream>
using namespace std;

class complex
{
private:
    int a , b;
    public:
    void set_data(int x , int y ){
        a=x;
        b=y;
    }
    
    void show_data(){
        cout<<endl<<"a = "<<a<<" b = "<<b;
    }
};

int main(){

    complex c1; // here c1 is object
    c1.set_data(3,4);
    c1.show_data();

    return 0 ; 
}
