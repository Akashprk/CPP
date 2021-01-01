// default arguments help to make 1 function but use in several ways

#include<iostream>
using namespace std;

int sum(int , int=0,int=0);

int main(){
int a,b;
 cout<<"Enter a value of a and b "<<endl;
 cin>>a>>b;
  cout<<"sum of value "<<sum(a,b)<<endl;
 int c ;
  cout<<"Enter a value of a and b and c "<<endl;
  cin>>a>>b>>c;
 cout<<"sum of value "<<sum(a,b,c);

    return 0 ;
}

int sum(int x, int y , int z){
    return(x+y+z);
}