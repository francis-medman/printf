#include "main.h"
/**
 * pr_binary - function that coverts number to binary
 * @args: input
 * Return: binary
 */
int pr_binary(va_list args)
{
	int i, l, base;
	char *reverse, *strng;
	unsigned int n, m;

	n = va_arg(args, unsigned int);
	m = n;
	base = 2;
	for (l = 0; m > 0; l++)
	{
		m = m / base;
	}

	if (n == 0)
	{
		return (_putchar('0'));
	}
	strng = malloc(sizeof(char) * l + 1);

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			strng[i] = '0';
		else
			strng[i] = '1';
		n = n / 2;
	}
	strng[i] = '\0';
	reverse = rev_st(strng);
	if (reverse == NULL)
	{
		return (-1);
	}
	for (i = 0; reverse[i] != '\0'; i++)
		_putchar(reverse[i]);
	return (l);
}
/**
 * rev_st - function that reverses a string
 * @s: input string
 * Return: pointer to reversed string
 */
char *rev_st(char *s)
{
	int i;
	int j = 0;
	char temp;
	char *rev;

	while (s[j] != '\0')
	{
		j++;
	}
	rev = malloc(sizeof(char) * j + 1);
	if (rev == NULL)
	{
		return (NULL);
	}
	_memcpy(rev, s, j);
	for (i = 0; i < j; i++)
	{
		j--;
		temp = rev[j - 1];
		rev[j - 1] = rev[i];
		rev[i] = temp;
	}
	return (rev);
}
/**
 * _memcpy - function that copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: 0 on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
