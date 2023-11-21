//RIMSHA IRFAN
//L1F22BSCS0466
#include "Function.h"

int myStrlen(const char* a)
{
    int length = 0;
    while (*(a + length) != '\0')
        length++;

    return length;
}

void mystrcopy(const char* a, char*& b)
{
    if (b != nullptr)
    {
        delete[] b;
    }

    int size = myStrlen(a);

    b = new char[size + 1];

    for (int i = 0; i <= size; i++)
    {
        *(b + i) = *(a + i);
    }
}
