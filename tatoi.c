#include "ctools.h"

int	main()
{
	int a;
	int b;
	char src[100];
	bzero(src, 100);
	while (strcmp(src, "end") != 0)
	{
		printf("type string for atoi test: ");
		scanf("%s", src);
		a = ft_atoi(src);
		b = atoi(src);
		compare_and_print(&a, &b, 'i');
	}
}
