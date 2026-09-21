#include <iostream>

int a = 1;
int b = 2;
char c = 'C';

inline void print(int num1, int num2, char num3)
{
    std::cout << num1 << "->" << num2 << "->" << num3 << "\n";
}

int main() 
{
    print(a,b,c);
    return 0;
}

