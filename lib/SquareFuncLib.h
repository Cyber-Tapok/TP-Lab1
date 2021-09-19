#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

#include <string>

extern "C++"
{
    LIB_API std::string CalcSquareFunc(int a, int b, int c);
}