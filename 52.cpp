// dynamic constructor in c++

#include<iostream>
using namespace std;

class A{
    private:
    int a,b;
    int *p;
    public:
    A(){
        a=0;b=0;
        p = new int;
        
    }
    A(int x,int y,int z){
        a=x;
        b=y;
        p = new int;
        *p =z;
        

    }
    void showData()
        {
            cout<<"a = "<<a<<" b = "<<b<<" p = "<<*p<<endl;
        }
};

int main(){
       A o1,o2(1,2,7);
       o2.showData();
       //o1.showData();
    return 0;
}