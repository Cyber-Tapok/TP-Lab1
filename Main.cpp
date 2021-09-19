#include <iostream>
#include <string>
#include <limits.h>
#include "lib/SquareFuncLib.h"

const char EOLN = '\n';
const char YES_CHAR = 'Y';
const char NO_CHAR = 'N';
const std::string ABOUT_MESSAGE = "ax^2 + bx + c = 0";
const std::string CONTINUE_MESSAGE = "Continue? (y/n)>";
const std::string INCORRECT_MESSAGE = "Input is incorrect. Try again>";
const std::string INPUT_MESSAGE = "Input an integer>";
const std::string OUTPUT_MESSAGE = "Result: ";
const std::string SKIP_CHARACTERS = " ";

void ClearInputStream(std::istream &in);
int Seek(std::istream &in);
bool CheckBounds(int n);
int ReadInt(std::istream &in);
bool NeedContinue(std::istream &in);


int main()
{
    std::cout << ABOUT_MESSAGE << std::endl;
    bool cont = true;
    while (cont)
    {
        int a = ReadInt(std::cin);
        int b = ReadInt(std::cin);
        int c = ReadInt(std::cin);
        std::cout << OUTPUT_MESSAGE << CalcSquareFunc(a, b, c) << std::endl;
        cont = NeedContinue(std::cin);
    }
    return 0;
}

void ClearInputStream(std::istream &in)
{
    in.clear();
    while (in.peek() != EOLN && in.peek() != EOF)
    {
        in.get();
    }
}

int Seek(std::istream &in)
{
    while (in.peek() != EOLN && SKIP_CHARACTERS.find((char)in.peek()) != std::string::npos)
    {
        in.get();
    }
    return in.peek();
}

bool CheckBounds(int n)
{
    return (INT_MIN <= n && n <= INT_MAX);
}

int ReadInt(std::istream &in)
{
    std::cout << INPUT_MESSAGE;
    int ans;
    in >> ans;
    while (!in || Seek(in) != EOLN || !CheckBounds(ans))
    {
        ClearInputStream(in);
        std::cout << INCORRECT_MESSAGE;
        in >> ans;
    }
    return ans;
}

bool NeedContinue(std::istream &in)
{
    std::cout << CONTINUE_MESSAGE;
    char ans;
    in >> ans;
    ans = std::toupper(ans);
    while (!in || Seek(in) != EOLN || ans != YES_CHAR && ans != NO_CHAR)
    {
        ClearInputStream(in);
        std::cout << INCORRECT_MESSAGE;
        in >> ans;
    }
    return ans == YES_CHAR;
}