// file handling in c++ and reading the data from the file 

#include<fstream>
#include<iostream>
using namespace std;

int main(){

    ifstream fin;
    fin.open("myfile.dat");
    char ch;
    ch=fin.get();
    while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    fin.close();

    return 0 ;
}


