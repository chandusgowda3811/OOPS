#include <iostream>
using namespace std;

class A{
    int a;
    public: A(int x){
        a=x;
    }
    int fun(){
        return a*a;
    }
    int fun(int x){
        return x*x;
    }
    int fun(int x, int y){
        cout<<x*y<<endl;
    }
};

class B: public A{
    int a,b;
    public: B(int x, int y):A(y){
        a=x;
        b=y;
    }
};

int main(){
    B obj1(1,4);
    cout<<obj1.fun();
    obj1.fun(1,4);
    return 0;
}