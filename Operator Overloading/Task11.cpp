#include <iostream>
class A
{
    int a;

public:
    A()
    {
    }
    a = 0;
    void operator++()
    {
        a += 3;
    }
    void print()
    {
        cout < < < < endl;
    }
};
int main()
{
    A obj;
    for (int i = 0; i < 5; i++)
        ++obj;
    obj.print();
    return 0;
}
