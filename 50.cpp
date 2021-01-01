// one class type to another class type in c++ by casting operator 

#include<iostream>
using namespace std;

class item{
     private:
     int a,b;
     public :
      void setData(int x , int y){
         a=x;b=y;
     }
     void showData(){
         cout<<"a = "<<a<<" b = "<<b<<endl;
     }
};

class product{
    private:
    int m,n;
    public:
    void setData(int x, int y ){
        m=x;n=y;
    }
   
     operator item(){
         item temp;
          temp.setData(m,n);
          return(temp);
         
     }
};


int main(){
      item i1;
      product p1;
      p1.setData(11,7);
      i1=p1;
      i1.showData();
    return 0;
}