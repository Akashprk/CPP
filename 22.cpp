// friend function in c++
/* member of one class can become friend to another class by using the scope resolution operator or declare the class name 
*/
#include<iostream>
using namespace std;

class complex{
    private:
     int a ,b;
    public:
    void setData(int x , int y){
        a=x;b=y;
    }
    void showData(){
        cout<<"a= "<<a<<"b= "<<b;
    }
    friend void fun(complex);
};

void fun(complex c){
    cout<<"sum is "<<c.a+c.b;
}

int main(){

    complex c1,c2,c3;
    c1.setData(3,2);
    fun(c1);

    return 0;
}