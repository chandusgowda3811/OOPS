#include<iostream>
class A{
public: int a;
void change(int i){
a=i;
}
void value_of_a(){
cout<<a;
   }
};
class B: public A{
int a=15;
public: void print(){
cout<<a;
  }
};
int main(){
B b;
b.change(10);
b.print();
b.value_of_a();
return 0;
}
