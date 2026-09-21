#include <iostream>

int main() 
{
  
    std::cout << std::fixed; 
    double a = 25.352;

    std::cout.precision(1); 
    std::cout << a << "\n";
    return 0;
}