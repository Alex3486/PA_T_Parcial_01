#include "Ejercicio01.h"

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int inicio = 0;
    int fin = length - 1;

    if (inicio >= fin)
        return true;
    if (phrase[0] == phrase[fin])
        return true;
    if (phrase[0] != phrase[fin])
        return false;
    return isPalindrome(phrase, length--);
}
