#include <iostream>
class A
{
public:
    void function() { << "A"; }
};
class B
{
public:
    void function()
    {
        cout << "B";
    };
    int main()
    {
        A a;
        a.function();
        B b;
        b.function();
        return 0;
    }
}