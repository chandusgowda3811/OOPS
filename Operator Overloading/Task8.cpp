#include <iostream>
class A
{
public:
    int add(int x = 0, int y = 0)
    {
        return x + y + 20;
    }
    int add(int x, int y)
    {
        return x + y;
    }
};
int main()
{
    int a = 2, b = 16;
    A obj;
    cout << obj.add() << endl;
    cout << obj.add(a, b) << endl;
    return 0;
}
