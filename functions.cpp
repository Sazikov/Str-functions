#include <stdio.h>
#include "functions.h"



int Puts (const char *str)
{
    int i = 0;
    char c;
    while (true)
    {
        c = str[i];
        if (c == '\0')
        {
            printf("\n");
            return 0;
        }
        printf("%c", c);
        i += 1;

    }
   return -1;
}



int Strchr (const char *str, int ch)
{
    int i = 0;
    while (true)
    {
        //printf("%c", str[i]);
        if (str[i] == ch) return i + 1;
        i += 1;
    }
    return -1;
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
    if (Strlen(str1) < Strlen(str2))
    {
        printf("The copied string is larger than destination string\n");
        return -1;
    }

    int i = 0;
    while (true)
    {
        str1[i] = str2[i];
        if (str2[i] == '\0') break;
        i ++;
    }
    return 0;
}


int Strncpy (char *str1, const char *str2, const int n)
{
    if (Strlen(str1) < Strlen(str2))
    {
        printf("The copied string is larger than destination string\n");
        return -1;
    }

    int len = Strlen(str2);
    for (int i = 0; i < n && i < len; i ++)
    {
        str1[i] = str2[i];
    }

    if (len < n)
    {
        int t = n - len;
        for (int i = 0; i < t; i++)
        {
            str1[i] = '\0';
        }
    }
    return 0;
}



void Strcat ( char *str1, const char *str2)
{

    const int len2 = Strlen(str2);
    const int len1 = Strlen(str1);

    for (int i = 0; i < len2; i ++)
    {
        str1[i + len1] = str2[i];
    }
}


void Strncat ( char *str1, const char *str2, const int n)
{

    const int len2 = Strlen(str2);
    const int len1 = Strlen(str1);

    for (int i = 0; i < len2 && i < n; i ++)
    {
        str1[i + len1] = str2[i];
    }
    if (len2 < n)
    {
        int t = n - len2;
        for (int i = 0; i < t; i ++) str1[len1 + len2 + i] = '\0';
     }

}

