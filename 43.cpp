// seekp() in c++

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("abc.txt",ios::ate);
    cout<<fout.tellp();
    fout<<"ABCDEFG";
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();
    return 0;
}