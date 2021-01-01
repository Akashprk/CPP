// tellp in c++

#include<fstream>
#include<iostream>
using namespace std;

int main(){

    ofstream fout;
    char ch;
    fout.open("abc.txt",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos;
    fout<<"Akash";
    pos=fout.tellp();
    cout<<pos;
    fout.close();

    return 0 ;
}