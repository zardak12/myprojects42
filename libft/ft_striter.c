#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	char *res;

	if (!s || !f)
		return;
	res = s;
	while (*res)
		f(res++);
}
