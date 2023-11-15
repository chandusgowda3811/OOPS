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
    void function(){
        function();
        cout<<"B";
    }
};

int main(){
    B b;
    b.function();
    return 0;
}