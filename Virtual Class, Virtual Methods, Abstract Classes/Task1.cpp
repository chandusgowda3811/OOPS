#include<iostream>
using namespace std;

class B{
    public: 
        void print(){
            cout<<"Base Function"<<endl;
        }
};

class D : public B{
    public: 
        void print(){
            cout<<"Derived Function"<<endl;
        }
};

int main(){
    D d1,d2;
    d1.print();
    d2.B::print();
    return 0;
}