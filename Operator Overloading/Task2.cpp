#include <iostream>
class A
{
public:
    void function() { cout << "A"; }
    class B
    {
    public:
        void function()
        {
            A obj;
            cout << "B";
            obj.function();
        }
    }
};
int main()
{
    B b;
    b.function();
    return 0;
}
