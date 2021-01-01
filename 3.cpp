/*when formal arguments are pointer variable, it is function call by addresh */


#include<iostream>
using namespace std;

int sum (int*, int*);

int main(){

    int a=5,b=6;
    int s=sum(&a,&b);
    cout<<"sum of s "<<s;

    return 0 ;
}

int sum(int *p , int *q){
    return(*p+*q);
}