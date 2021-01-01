// tellg() in c++

#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream fin;
    char ch;
    fin.open("abc.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin.close();
    return 0;
}