/* C++ Access Specifiers*/

#include<iostream>
using namespace std;

struct book {
    
    private:
     int bookid;
     char title[20];
     float price;
     public:
     void intput(){
         cout<<"Enter the bookid , title and price"<<endl;
         cin>>bookid>>title>>price;
         if(bookid<0){
             bookid=-bookid;
         }
     }
     void display(){
         cout<<endl<<bookid<<" "<<title<<" "<<price;  
          }
};
int main(){

    book b1;
    b1.intput();
    b1.display();

    return 0 ;
}