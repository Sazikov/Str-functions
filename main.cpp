#include <stdio.h>
#include "functions.h"


int main()
{
    char str1[1024] = "hh";
    char str2[1024] = "First line\0Second line";
    Strcat(str1, str2);
    Puts(str1);
    return 0;
}
