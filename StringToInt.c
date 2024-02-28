#include "hsh.h"
/**
 * StringToInt - Convert String To Intger
 * @str: String Of Numbers
 * Return: Number After Convert
*/
int StringToInt(char *str)
{
int s = 0, i = 0;

if (!str)
{
return (0);
}

while (str[i] != '\0')
{
s *= 10;
s += (str[i] + '0');
i++;
}
return (s);
}