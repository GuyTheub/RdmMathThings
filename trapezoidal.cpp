#include "trapezoidal.hpp"

double trapezoidal(const double a, const double b, const int n, double(*f)(const double))
{
    double sum = 0;
    for (auto k = 1; k < n; k++)
    {
        sum += (*f)(a + k * (b -  a) / n);
    }

    return (b - a) / n * (((*f)(a) + (*f)(b)) / 2 + sum);
}