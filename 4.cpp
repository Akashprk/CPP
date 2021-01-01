//when formal arguments are reference variable, it is function call by reference

#include<iostream>
using namespace std;

int sum(int & , int &);

int main(){

    int a=5,b=6;
    int s=sum(a,b);
    cout<<"sum of s "<<s;

    return 0 ;
}

int sum(int &x,int &y){
    return(x+y);
}