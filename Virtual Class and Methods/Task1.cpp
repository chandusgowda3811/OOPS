#include<iostream>
using namespace std;

class A{
    public:
    void function(){
        cout<<"A";
    }
};

class B : public A{
    public: 
    void function(){
        cout<<"B";
    }
};

int main(){
    B b;
    b.function();
    return 0;
}