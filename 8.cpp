// structure in c++

#include<iostream>
using namespace std;

struct book {
   int bookid;
   char title[20];
   float price;
};
void display(book);
book input();

int main(){
 book b1;
 b1=input();
 display(b1);

    return 0 ;
}


book input(){
    book b;
    cout<<"Enter bookid , title and price of book ";
    cin>>b.bookid>>b.title>>b.price;
    return b;

}

void display(book b){
    cout<<endl<<b.bookid<<" "<<b.title<<" "<<b.price;
}