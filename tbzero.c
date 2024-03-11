#include "ctools.h"

int	main()
{
	char *a;
	char *b;
	int bytes;
	char src[10];
	while (1)
	{
		memset(src, '*', 10);
		printf("\033[39mtype nr of bytes for bzero: ");
		scanf("%d", &bytes);

		if (bytes == -1)
			break;

		ft_bzero(src, bytes);
		a = get_mem(src, 10);

		memset(src, '*', 10);

		bzero(src, bytes);
		b = get_mem(src, 10);

		compare_and_print(a, b, 'm');

		free(a);
		free(b);
	}
}
