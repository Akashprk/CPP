// c++ function inside the structure
// Encapsulation{single group of function of and variables}

#include<iostream>
using namespace std;


struct book
{
    int bookid;
    char title[20];
    float price;

     void input(){
         cout<<"Enter the bookid , title and price"<<endl;
         cin>>bookid>>title>>price; // access member without dot operator
     }
     void display(){
         cout<<endl<<bookid<<" "<<title<<" "<<price;
     }
};

int main(){
  
   book b1;
   b1.input();
   b1.display();

    return 0;
}