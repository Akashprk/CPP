//Array in  STL  c++

#include<iostream> 
#include<array>
using namespace std;

int main(){
    array <int , 5> array_data1= {1,2,3,4,5};
    array <int , 5> array_data2= {101,102,103,104,105};
   // cout<<array_data1.at(3)<<endl;
   // cout<<array_data1.front()<<endl;
   // cout<<array_data1.back()<<endl;
   // array_data1.fill(7);
    cout<<array_data2.size();
    for (int i = 0; i <= 4; i++)
    {
     //   cout<<array_data1[i];
    }
    
    cout<<endl;
    array_data1.swap(array_data2);

    for (int i = 0; i <= 4; i++)
    {
        cout<<array_data1[i];
    }

    cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cout<<array_data2[i];
    }
    

    return 0 ;    
}