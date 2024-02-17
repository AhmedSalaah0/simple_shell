#include "hsh.h"
/**
 * strlength - function return the string length
 * @s: the string
 * Return: The Length Of The String
*/
int strlength(char *s)
{
unsigned int length;

if (!s)
{
return (0);
}
for (length = 0; s[length] != '\0'; length++)
;

return (length);
}
