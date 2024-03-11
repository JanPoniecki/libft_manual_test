#ifndef CTOOLS_H
# define CTOOLS_H

# include <bsd/string.h> 
# include <stdio.h> 
# include <string.h> 
# include <stdlib.h> 
# include "libft/libft.h"


char *test_arg(char *str);
void print_mem(char *src, int size);
void compare_and_print(void *a, void *b, char type);
char *get_mem(char *src, int size);

#endif
