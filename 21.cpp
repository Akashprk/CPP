// preincrement and postincrement operator overloading

#include<iostream>
using namespace std;

class interger{
       private:
        int x;
       public:
        void setData(int a){
            x=a; }
        void showData(){
            cout<<"x="<<x;
        }
       interger operator++(){ //preincrement overloading
               interger i;
               i.x=++x;
               return(i);
        }
        interger operator++(int){// postincrement overloading
            interger i;
            i.x=x++;
            return(i);
        }
};

int main(){
    
    interger i1,i2;
    i1.setData(3);
    i1.showData();
    i2=++i1; // i2=i1.operator++();
    //i2=i1++; //i2=i1.operator++(0);
    i1.showData();
    i2.showData();
    return 0;
}