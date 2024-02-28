#include "hsh.h"
/**
 * strconcat - function concatenate two strings
 * @first: first string
 * @second: second string
 * Return: first string after concatenated
*/
char *strconcat(char *first, char *second)
{
int len1 = strlength(first), len2 = 0;

while (*(second + len2) != '\0' && len2 < 97)
{
*(first + len1) = *(second + len2);
len1++;
len2++;
}
*(first + len1) = '\0';
return (first);
}
