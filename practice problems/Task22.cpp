#include <iostream>
using namespace std;

class Host{
    public: class Nested{
        public: void print(){
            cout<<"Hello World"<<endl;
        }
    };
};

int main(){
    Host::Nested foo;
    foo.print();
    return 0;
}