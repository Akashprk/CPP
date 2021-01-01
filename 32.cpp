// (dma) new and delete in c++

#include<iostream>
using namespace std;

class student{

    int age;
    public:
    student(): age(20){} // constructor initializes age to 20

    void getAge(){
        cout<<"Age "<<age<<endl;
    }
};


 int main(){

 student *ptr = new student(); // here dynamically declare student object
 ptr->getAge(); // call getAge() function

 delete ptr; // by using the delete keyword memory is relased

     return 0;

 }