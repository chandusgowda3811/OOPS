#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Foo{
    public: int f(string str){
        cout<<str<<endl;
        return 1;
    }
};

int main(){
    int (Foo::*fptr)(string)=&Foo::f;
    Foo obj;
    (obj.*fptr)("Hello");
    Foo* p=&obj;
    (p->*fptr)("World");
    return 0;
}