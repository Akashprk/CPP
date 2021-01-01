// map class (STL) in c++

#include<iostream>
#include<map>

using namespace std;

int main(){

    map <int, string> students;
    students[1]="Akash chaudhary";
    students[2]="Manan Rastogi";
    students[3]="Sagar katari";
    students[4]="Smarth Anand";
    students[5]="Manan Gupta";

    // we can also declare and initialize at same time

  // for example  map<int,string> student {{1,"Sharma "}, {2,"Akash Phogat"}}
    
 
 map <int, string> ::iterator p = students.begin();
 while(p!=students.end()){
     cout<<p->first<<endl;
     cout<<p->second<<endl;
     p++;
 }
 
    return 0;
}