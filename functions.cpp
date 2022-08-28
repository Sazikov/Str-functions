#include <stdio.h>
#include "functions.h"



int Puts (const char *str)
{

    while (*str != '\0')
    {
        putchar(*str);
        str++;

    }
   return 0;
}


char *Strchr ( char *str, int ch)
{

    while (*str != '\0')
    {
        if (*str == ch) return str;
        str++;
    }
    return NULL;
}

int Strlen (const char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i += 1;
    }
    return i;
}


int Strcpy (char *str1, const char *str2)
{
    int i = 0;
    while (true)
    {
        str1[i] = str2[i];
        if (str2[i] == '\0') break;
        i++;
    }
    return 0;
}


int Strncpy (char *str1, const char *str2, const int n)
{
    int len = Strlen(str2);
    for (int i = 0; i < n && i < len; i ++)
    {
        str1[i] = str2[i];
    }

    if (len < n)
    {
        int diff = n - len;
        for (int i = 0; i < diff; i++)
        {
            str1[i] = '\0';
        }
    }
    return 0;
}


char *Strcat ( char *str1, const char *str2)
{
    const int len2 = Strlen(str2);
    const int len1 = Strlen(str1);
    char *result = str1;

    for (int i = 0; i < len2; i ++)
    {
        result[i + len1] = str2[i];
    }
    return result;
}


char *Strncat ( char *str1, const char *str2, const int n)
{

    const int len2 = Strlen(str2);
    const int len1 = Strlen(str1);
    char *result = str1;

    for (int i = 0; i < len2 && i < n; i ++)
    {
        result[i + len1] = str2[i];
    }
    if (len2 < n)
    {
        int diff = n - len2;
        for (int i = 0; i < diff; i ++)
            result[len1 + len2 + i] = '\0';
    }
    return result;
}


int Strcmp (const char *str1, const char *str2)
{
    while (*str1 != '\0' || *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        else
        {
            str1++;
            str2++;
        }
    }
    return 0;
}
