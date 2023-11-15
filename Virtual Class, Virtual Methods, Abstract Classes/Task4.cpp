#include<iostream>
using namespace std;

class B{
    int a;
public:
    B(int value) : a(value) {}

    virtual int fun(){
        return a;
    }
};

class D1 : public B{
    int a;
public: 
    D1(int value) : B(value), a(value) {}

    int fun() override{
        return a;
    }
};

class D2 : public B{
    int a;
public: 
    D2(int value) : B(value), a(value) {}

    int fun() override{
        return a;
    }
};

void print(B* b){
    cout<<"Value: "<<b->fun()<<endl;
}

int main(){
    B* b1 = new B(1);
    B* b2 = new D1(2);
    B* b3 = new D2(3);

    print(b1);
    print(b2);
    print(b3);

    return 0;
}
