// 6. Write a function bool isEven(int n) using only a bitwise operator (no %).

#include <iostream>
using namespace std;
bool isEven(int n)
{
    return !(n & 1);
}

int main()
{
    cout << isEven(10);
    return 0;
}
