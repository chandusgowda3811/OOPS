#include<iostream>
using namespace std;
class A{
public: A(int x){
cout<<”A”<<x;
   }
};
class B:public A{
public: B(int x){
cout<<”B”<<x;
  }
};
class C:public B{
public: C(int x,int y,int z):A(y), B(z){
cout<<”C”<<x;
  }
};
int main(){
C obj(2,5,9);
return 0;
}