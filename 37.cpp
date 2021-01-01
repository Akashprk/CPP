// class template in c++

#include<iostream>
using namespace std;

 template<class x> class ArrayList{
    private:
    struct controlblock{
        int capacity;
        x *arr_ptr;
    };
       controlblock *s;
    public:
    ArrayList(int capacity){
        s = new controlblock;
        s->capacity = capacity;
        s->arr_ptr= new x(s->capacity);
    }

    void addElement(int index , x data){
        if(index>=0&&index<=s->capacity-1){
          s->arr_ptr[index]=data;
        }
        else{
            cout<<"\n Array is not valid";
        }
    }
    void viewElement(int index , x &data){
        if(index>=0&&index<s->capacity){
            data = s->arr_ptr[index]=data;
        }
        else{
            cout<<"\nArray index is not valid";
        }
    }
     void view(){
         int i;
         for(i=0;i<s->capacity;i++){
             cout<<" "<<s->arr_ptr[i];
         }

     }
};

int main(){
 
    int data;
    ArrayList <float> list1(4);
    list1.addElement(0,1.1);
    list1.addElement(1,2.2);
    list1.addElement(2,3.2);
    list1.addElement(3,4.4);
    list1.view();

    return 0 ;
}