#include<iostream>
using namespace std;

class B{
    public:
    virtual void fun1(){
        cout<<"Base ";
    }
    void fun2(){
        cout<<"Base ";
    }
};

class D : public B{
    public:
    void fun1(){
        cout<<"Derived ";
    }
    void fun2(){
        cout<<"Derived ";
    }
};

int main(){
    B *b;
    D obj;
    b = &obj;
    b->fun2();
    return 0;
}