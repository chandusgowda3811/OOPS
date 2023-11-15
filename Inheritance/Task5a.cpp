#include<iostream>
using namespace std;
class A{
public: A(int x){
cout<<”A”<<x;
   }
};
class C{
public: C(int x){
cout<<”C”<<x;
  }
};
class B:public A,C{
public: B(int x,int y,int z):C(x),A(y){
cout<<”B”<<z;
  }
};
int main(){
B obj(2,5,9);
return 0;
}
