// nested  class in c++

#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    char name[20];
    int rollno;
    class addresh{
        private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[10];
         public:
        void  setAddresh(int h, char *s , char *c , char *st, char *p){
            houseno = h;
            strcpy(street , s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
          void showAddresh(){
              cout<<"\n"<<houseno<<endl;
              cout<<street<<" "<<city;
              cout<<" "<<pincode<<endl;
              cout<<state<<endl;
          }
         };
         
        addresh add;
         public:
        void setRollno(int r){
                 rollno=r;
        }
        void setName(char *n){
           strcpy(name,n);
        }
        void setAddresh(int h, char *s, char *c,char*st,char*p){
            add.setAddresh(h,s,c,st,p);
        }
        void showStudent(){
            cout<<"student_data"<<endl;
            cout<<rollno<<" "<<endl;
            cout<<name<<" "<<endl;
            add.showAddresh();
        }

};

int main(){

    student s1;
    s1.setRollno(51);
   s1.setName("vishu");
    s1.setAddresh(101,"xyz road","meerut","up","1441");
    s1.showStudent();
    

    return 0;
}