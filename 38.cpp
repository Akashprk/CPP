// file handling in c++ and writing the data in the file 
// file mode ios::in,out,ate,bin,app;
#include<iostream>
#include<fstream>
using namespace std;




int main(){

    ofstream fout;
    fout.open("myfile.dat",ios::binary);
    fout<<"hello Akash \nwelcome from\n c++ world \n yes\n no.";
    fout.close();


    return 0 ;
}