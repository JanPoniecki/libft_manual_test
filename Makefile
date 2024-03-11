CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBS = -I. -L./libft -lft -lbsd

%: %.c
	$(CC) $(CFLAGS) $< ctools.c $(LIBS) && ./a.out
