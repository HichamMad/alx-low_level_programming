#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}

