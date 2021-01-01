// seekg in c++

#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("abc.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(4);
    cout<<"now"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(2,ios_base::cur);
    cout<<"\n\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(2,ios_base::beg);
    cout<<"\n\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(-2,ios_base::end);
    cout<<"\n\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.close();
    return 0;
}