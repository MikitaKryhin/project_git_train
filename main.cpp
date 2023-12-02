#include <iostream>

int Policz(int a, int b)
{
    return (a+b)*(a-b);
}

int main() {
    std::cout << "Hello, World!\na*b=" << Policz(5, 9) << std::endl;
    return 0;
}
