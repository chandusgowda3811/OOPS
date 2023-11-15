#include<iostream>
class A{
public: ~A(){
cout<<”A”;
  }
};
class B{
public: ~B(){
cout<<”B”;
  }
};
class C:public A,B{
public: ~C(){
  cout<<”C”;
  }
};
int main(){
C c;
return 0;
}
