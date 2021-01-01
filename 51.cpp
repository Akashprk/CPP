// expection handling in c++

#include<iostream>
using namespace std;

int fun(){

    throw 11;
}

int main(){
       cout<<"Akash chaudhary"<<endl;
       try
       {
         //  throw 10;
          // cout<<"Inside try"<<endl;

          // throw "string";
          // cout<<"Inside try"<<endl;

          // throw 11.2;
          // cout<<"Inside try"<<endl;

           throw fun();
           cout<<"throw using by function"<<endl;
       }
       catch(int e)
       {
          cout<<"Expection no:"<<e<<endl;

       }
       cout<<"last_line"<<endl;
       
    return 0;
}