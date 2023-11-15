#include<iostream>
class A{
public: A(int x){
cout<<”A”<<x;
}
Void get(){cout<<” hello world “;}
  }
};
class B: protected A{
public: B(int x,int y):A(y){
cout<<”B”<<x;
  }
};
class C: public B{
public: C(int x, int y,int z):B(y,z){
get();
cout<<”C”<<x;
  }
};
int main(){
C obj(2,5,9);
return 0;
}
