#include <iostream>


int main() {
    
    std::cout << std::fixed;
    double a = 13;
    std::cout.precision(0);
    std::cout << a << " * ";

    
    double b = 0.165;
    std::cout.precision(6);
    std::cout << b << " = " << a * b << "\n";
    return 0;
}