// initializer in c++

#include<iostream>
using namespace std;


class Dummy{
    private:
    const int x;
    int &y;
    public:
    Dummy(int &n):x(5),y(n)
    {cout<<x<<" "<<y;}
};

int main(){
    int m=6;
    Dummy d1(m);

    return 0;
}