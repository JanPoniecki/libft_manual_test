#include "ctools.h"

char *test_arg(char *str)
{

	char *empty = "";
	char *nll = NULL;
	if (strncmp(str, "EMPTY", 6) == 0)
		return (empty);
	else if(strncmp(str, "NULL", 6) == 0)
		return (nll);
	else
	{
		int i = 0;
		while (str[i])
		{
			str[i] = (str[i] == '@' ? 0 : str[i]);
			i++;
		}
		return (str);
	}
}

void print_mem(char *src, int size)
{
	int i = 0;
	while (i < size)
	{
		if (src[i] == 32)
			printf("_ ");
		else if (src[i] == 0)
			printf("0 ");
		else if (src[i] == 10)
			printf("N ");
		else
			printf("%c ", src[i]);
		i++;
	}
	printf("\n");
	int j = 0;
	int k = 0;
	while (k < i)
	{
		printf("%d ", j++);
		if (j == 10)
			j = 0;
		k++;
	}
	printf("\n");
}

void compare_and_print(void *a, void *b, char type)
{
	if (type == 'i')
	{
		if (*(int *)a == *(int *)b)
			printf("res A: 	\033[32m%d\033[39m\nres B: 	\033[32m%d\033[39m\n", *(int *)a, *(int *)b);
		else
			printf("res A: 	\033[31m%d\033[39m\nres B: 	\033[31m%d\033[39m\n", *(int *)a, *(int *)b);
	}
	else if (type == 'm')
	{
		if (memcmp(a, b, 10) == 0)
		{
			printf("res A: \033[32m\n");
			print_mem((char*)a, 10);
			printf("\033[39mres B: \033[32m\n");
			print_mem((char*)b, 10);
		}
	}
}

char *get_mem(char *src, int size)
{
	char *res = malloc(size + 1);
	int i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	return res;
}
