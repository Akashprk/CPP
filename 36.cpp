 // template in c++


 #include<iostream>
 using namespace std;

 template <class x, class y>

 x  big( x a,  y b){  // function template in also know as generic function 
          if(a>b){
              return a;
          }
          else{
              return b;
          }
 } 
 
 int main(){

     cout<<big(5.2,7);

     return 0 ;
 }