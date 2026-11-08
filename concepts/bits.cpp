// 6. Write a function bool isEven(int n) using only a bitwise operator (no %).

#include <iostream>
using namespace std;
// bool isEven(int n)
// {
//     return !(n & 1);
// }

// int main()
// {
//     cout << isEven(10);
//     return 0;
// }

// 7.
// void swapXor(int &a, int &b) {
// your code
//}

// void swapXor(int &a, int &b)
// {
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }
// int main()
// {
//     int a = 5, b = 3;
//     cout << a << " " << b << endl; // before
//     swapXor(a, b);
//     cout << a << " " << b << endl; // after, expect 3 5
//     return 0;
// }

// Question 8 is still pending

// Write a program that takes n and prints n * 8 without using *. Two hints:

// n << 1 is n * 2, n << 2 is n * 4
// So which shift amount gives n * 8?
int numberOfSteps(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num / 2;
        count = count + 1;
    }
    return count;
}
int main()
{
    cout << numberOfSteps(14);
    return 0;
}
