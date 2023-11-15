#include <iostream>
using namespace std;

class B{
    public: B(){
        cout<<"class B"<<endl;
    }
};

class C{
    public: C(){
        cout<<"Class C"<<endl;
    }
};

class D: public C,B{
    public: D(){
        cout<<"class D"<<endl;
    }
};

int main(){
    B *b=new D();
    return 0;
}