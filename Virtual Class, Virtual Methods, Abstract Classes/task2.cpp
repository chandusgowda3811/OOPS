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
    D d1;
    B* ptr = &d1;
    ptr->print();
    return 0;
}