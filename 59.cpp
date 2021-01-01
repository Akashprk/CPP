// vector class (STL) C++

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector <int>v1{1,2,3,4,5} ;
    //vector <char>v2(4);
    //vector <int>v3(5,10);
    //vector <string>v4(3,"hello");
    //cout<<v4[0]<<endl;
   // cout<<v4[1]<<endl;
   // cout<<v4[2]<<endl;
    //for(int i =0;i<=4;i++)
    // cout<<v1[i]<<endl;
    vector <int> v5;
    cout<<v5.capacity()<<endl;//0 capacity
    v5.push_back(10);
    cout<<v5.capacity()<<endl; // 1 capacity 
    v5.push_back(20);
    cout<<v5.capacity()<<endl;//2 capacity
    v5.push_back(30);
    cout<<v5.capacity()<<endl; // 4 capacity
    v5.push_back(40);
    cout<<v5.capacity()<<endl; // 4 capcity

    vector <int> v6;
    cout<<v6.capacity()<<endl;
    for(int i=0;i<=9;i++){
        v6.push_back(10*(i+1));  // similarly pop_back remove the last element in array but they don't decreases the capacity ...
    }
    cout<<v6.capacity()<<endl;

    return 0 ;
}