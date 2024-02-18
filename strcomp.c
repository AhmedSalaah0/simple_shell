#include "hsh.h"
/**
 * strcomp - string comparison function
 * @first: first string
 * @second: second string
 * Return: differance after comparison
*/

int strcomp(char *first, char *second)
{
int p, d, len1, len2, min;

len1 = strlength(first);
len2 = strlength(second);
p = 0;

min = len1 <= len2 ? len1 : len2;

while (p <= min)
{
if (first[p] == second[p])
{
p++;
continue;
}
else
{
d = first[p] - second[p];
break;
}
p++;
}
return (d);
}
/**
 * strncomp - string comparison function in spacific length
 * @first: first string
 * @second: second string
 * @len: the length
 * Return: differance after comparison
*/
int strncomp(char *first, char *second, size_t len)
{
size_t i = 0;

if (len <= 0)
{
return (-EINVAL);
}
while (i < len && first[i] != '\0' && second[i] != '\0')
{
int diff = first[i] - second[i];
if (diff != 0)
{
return (diff);
}
i++;
}
if (i < len)
{
if (strlen(first) < strlen(second))
{
return (-1);
}
else if (strlen(first) > strlen(second))
{
return (1);
}
}
}
