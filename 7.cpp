// function overloading

#include<iostream>
using namespace std;

int area(int,int);
float area(int );

int main(){

int r ; 
cout<<"Enter the radius of circle "<<endl;
cin>>r;
float A = area(r);
cout<<"The area of circle is "<<A<<endl;

int l,b,a;
cout<<"Enter the length and breadth of rectangle "<<endl;
cin >> l >> b ;
a = area(l,b);
cout<<"The area of rectangle is "<<a;

    return 0 ;
}

float area(int R){
    return(3.14*R*R);
}

int area(int L , int B){
    return(L*B);
}