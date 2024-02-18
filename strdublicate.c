#include "hsh.h"
/**
 * strdublicate - dublicate string to another
 * @s: string should be dublicate
 * Return: Dublicated string
 *
*/
char *strdublicate(char *s)
{
char *res;
unsigned int len, i = 0;

len = strlength(s);

if (!s)
return (NULL);

res = malloc(sizeof(char) * len + 1);
if (!res)
return (NULL);
while (i < len)
{
res[i] = s[i];
i++;
}

res[i] = '\0';
return (res);
}
