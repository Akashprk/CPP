// pair in stl c++

#include<iostream>
using namespace std;

class student{
 private : 
  int age;
  string name;
  public:
  void setStudent(string s , int a ){
      name =s ;age=a;
  }

  void showdata(){
      cout<<"\nname :"<<name<<endl;
      cout<<"Age :"<<age<<endl;
  }

};

int main(){
    pair <string , int>p1;
    pair <string , string>p2;
    pair <string , float>p3;
    pair <int , student>p4;
    p1=make_pair("Akash",11);
    p2=make_pair("India","Meerut");
    p3=make_pair("c++ primer",555);
    student s1;
    s1.setStudent("Akash",20);
    p4=make_pair(7,s1);

    cout<<"\n pair 1";
    cout<<"\n"<<p1.first<<" "<<p1.second;
    cout<<"\n pair 2";
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\n pair 3";
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\n pair 4";
    cout<<"\n"<<p4.first<<" ";
    student s2= p4.second;
    s2.showdata();

    

    return 0 ;
}