#include<iostream>
using namespace std;

class A{
    public:
    void function(){
        cout<<"A";
    }
};

class C{
    public:
    void function(){
        cout<<"C";
    }
};

class B : public A, C{
    public: 
    void fun2(){
        A::function();
        C::function();
        cout<<"B";
    }
};

int main(){
    B b;
    b.fun2();
    return 0;
}