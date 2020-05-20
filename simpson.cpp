#include "simpson.hpp"

double simpson(const double a, const double b, double(*f)(const double))
{
    return (b - a) / 6 * ((*f)(a) + 4 * (*f)((a + b) / 2) + (*f)(b));
}