// list class (stl) c++

#include<iostream>
#include<list>
using namespace std;

int main(){

    list <int> l1{1,4,7,3,2,5};

    list<int>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    
    l1.sort(); // you can use here reverse , pop_front , pop_back, push_front, push_back,size,remove,clear etc;
    list<int>::iterator q=l1.begin();
    while(q!=l1.end()){
        cout<<*q<<" ";
        q++;
    }


    return 0;
}