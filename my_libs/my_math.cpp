#include "my_math.h"
#include <iostream>

double MyMath::adder(double a, double b)
{
    std::cout << a << " + " << b << " = " << a+b << std::endl;
    return a + b;
}

double MyMath::subtracter(double a, double b)
{
    std::cout << a << " - " << b << " = " << a+b << std::endl;
    return a - b;
}