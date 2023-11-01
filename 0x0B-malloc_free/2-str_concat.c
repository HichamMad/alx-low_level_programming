#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *stct;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	stct = malloc(sizeof(char) * (i + j + 1));
	if (stct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		stct[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		stct[i] = s2[j];
		i++,j++;
	}
	stct[i] = '\0';
	return (stct);
}





