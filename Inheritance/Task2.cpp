#include<iostream>
using namespace std;
class A{
public: A(int y){
cout<<”A”<<y;
   }
};
class B:public A{
public:B(int x,int y):A(x){
cout<<”B”<<y;
   }
};
int main(){
B obj(4,5);
return 0;
}
