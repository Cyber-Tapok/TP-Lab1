#define LIB_EXPORT
#include "SquareFuncLib.h"
#include <string>
#include <cmath>

std::string CalcSquareFunc(int a, int b, int c)
{
    double D = b * b - 4 * a * c;
    if (D < 0)
    {
        return "No results";
    }
    if (D == 0)
    {
        double x1 = -b / (2 * a);
        return "x1 = x2 = " + std::to_string(x1);
    }
    double x1 = (-b + sqrt(D)) / (2 * a), x2 = (-b - sqrt(D)) / (2 * a);
    return "x1 = " + std::to_string(x1) + " x2 = " + std::to_string(x2);
}