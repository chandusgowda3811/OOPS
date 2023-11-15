#include<iostream>
using namespace std;

class B{
    int a;
    public:
    void fun(){
        cout<<"Base class"<<endl;
    }
};

class D: public B{
    int a;
    public:
    void fun(){
        cout<<"Derived class"<<endl;
    }
};

int main(){
    B b = D();
    b.fun();
    return 0;
}