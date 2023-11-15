using namespace std;
#include <iostream>
class One{
    public: virtual int fun(int x, int y){
        return (x++ + ++y + x<<2);
    }
};

class Two: public One{
    public: int fun(int x, int y){
        return (++x + y++ + y>>2);
    }
};

int main(){
    One obj = Two();
    cout<<obj.fun(2,3)<<endl;
    return 0;
}