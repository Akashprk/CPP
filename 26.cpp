// overloading of insertion and extraction function in c++

#include<iostream>
using namespace std;

class complex {
    private:
     int a ,b ;
    public:
     void setData(){
         int x;
         int y;
     }
     void showData(){
         cout<<" a = "<<a<<" b = "<<b<<endl;
     }
     friend ostream& operator <<(ostream&,complex);
     friend istream& operator >>(istream&,complex&);
};
ostream& operator<<(ostream &dout,complex c){
    cout<<"a = "<<c.a<<" b = "<<c.b;
    return(dout);
}
istream& operator >>(istream &din,complex &c){
    cin>>c.a>>c.b;
    return(din);
}

int main(){
    complex c1;
    cout<< "Enter a number"<<endl;
    cin>>c1; //cin.operator>>(c1);
    cout<<"you entered"<<endl;
    cout<<c1; //operator<<(cout,c1)

    return 0;
}