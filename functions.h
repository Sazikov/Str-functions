
/**
@brief Used to print the string
@param[out] String, which you want to print
@return 0 if string was printed
@return -1 in another case
*/
int Puts (const char *str);

/**
@brief Used to find symbol in the string
@param[out] String, in which you want to find symbol
@param[in] Symbol, which you want to find
@return Pointer to the found character in string, or null pointer if no such character is found.
*/
char *Strchr ( char *str, int ch);

/**
@brief Used to determine the length of a string
@param[out] String, which length you want to know
@return length of the string
*/
int Strlen (const char *str);

/**
@brief Used to copy the first line of the second string to the first string
@param[out] String, in which you want to copy the second string
@param[out] String, which you want to copy
@return 0 if the copy was successful
@return -1 if the length of the first string was smaller than length of the second string
*/
int Strcpy (char *str1, const char *str2);

/**
@brief Used to copy the first line of the second string to the first string
@param[out] String, in which you want to copy the second string
@param[out] String, which you want to copy
@return 0 if the copy was successful
@return -1 if the length of the first string was smaller than length of the second string
*/
int Strncpy (char *str1, const char *str2, const int n);

/**
@brief Used to append the string str2 to the end of the string str1
@param[out] String, in which you want to append second string
@param[out] String, which you want to append
*/
char *Strcat (char *str1, const char *str2);

/**
@brief Used to append the first n symbols of the string string str2 to the end of the string str1
@param[out] String, in which part you want to append second string
@param[out] String, which you want to append
*/
char *Strncat (char *str1, const char *str2, const int n);

/**
@brief Used to compare two null-terminated byte strings lexicographically.
@param[out] pointers to the first null-terminated byte strings to compare
@param[out] pointers to the second null-terminated byte strings to compare
@return Negative value if str1 appears before str2 in lexicographical order.
@return Zero if str1 and str2 compare equal.
@return Positive value if str1 appears after str2 in lexicographical order.
*/
int Strcmp (const char *str1, const char *str2);
