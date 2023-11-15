#include<iostream>
using namespace std;

class A{
    public:
    virtual void fun1(){
        cout<<"A"<<endl;
    }
};

class B: public A{ };
class C: public A{ };
class D: public B,C{
    public:
    void fun2(){
        fun1();
        cout<<"D class"<<endl;
    }
};

int main(){
    D obj;
    obj.fun1();
    return 0;
}