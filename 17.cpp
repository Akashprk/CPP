// copy constructor in c++

#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:

    complex(int x , int y){ // Parameterized Constructors
        a=x,b=y;
        cout<<a<<" "<<b<<endl;
    }
    complex(int k ){    // Parameterized Constructors
        a=k;
        cout<<a<<" "<<endl;
    }
    complex(){

    }

    complex(complex &c){ // copy constructor
       a=c.a;
       b=c.b;
       cout<<a<<" "<<b<<endl;
    }
    
};

int main(){
    complex c1(4,5),c2,c3(7);
    complex c4(c1);

    return 0 ;
}