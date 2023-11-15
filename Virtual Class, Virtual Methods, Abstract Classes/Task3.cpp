#include<iostream>
using namespace std;

class B{
    public: 
        virtual void print(){
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
    D d1;
    B* b1 = &d1;
    b1->print();
    return 0;
}