#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Foo{
    public: Foo(int i=0){
        _i=i;
    }
    void f(){
        cout<<"Hello!"<<endl;
    }
    private:
    int _i;
};

int main(){
    Foo *p=0;
    p->f();
    return 0;
}