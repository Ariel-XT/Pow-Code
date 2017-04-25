#include <iostream>

// Prototype
// f(b,e) = b^e
double pow(double, double);

int main()
{
    
    std::cout << "what is the base number?" << std::endl;
    double base;
    std::cin >> base;
    
    std::cout << "what is the power you want to use?" << std::endl;
    double exponent;
    std::cin >> exponent;
    std::cout << pow(base, exponent) << std::endl;
    return 0;
}

// returns double
double pow(double base, double exponent)
{
    // base case
    if (exponent == 0)
    {
        return 1;
    }
    
    double answer = base;
    
    for (int i = 0; i < exponent - 1; ++i)
    {
        answer = answer * base;
    }
    
    return answer;
}


