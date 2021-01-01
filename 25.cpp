/* overloading of uniary operator as a friend function
In friend function we pass one more arrgument in compare to membership function*/


#include<iostream>
using namespace std;

class complex{
    private:
     int a ,b;
    public:
    void setData(int x , int y ){
          a=x;b=y;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    friend complex operator -(complex );
};
 complex operator -(complex X){
     complex temp;
     temp.a=-X.a;
     temp.b=-X.b;
     return(temp);
 }

int main(){

    complex c1,c2;
    c1.setData(4,5);
    c2=-c1; //c2=operator -(c1);
    c1.showData();
    c2.showData();

    return 0 ;
}
