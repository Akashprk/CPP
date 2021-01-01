// this pointer in c++

#include<iostream>
using namespace std;

class Box{
    private:
    int l,b,h;
    public:
    void setDimension(int l , int b , int h){
        this->l=l;this->b=b;this->h=h;
    }
    void showDimension(){
        cout<<"l = "<<l<<" b = "<<b<<" h = "<<h;
    }
};

int main(){
    Box smallbox;
    smallbox.setDimension(11,5,7);
    smallbox.showDimension();

    return 0;
}