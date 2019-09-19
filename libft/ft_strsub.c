#include "libft.h"

char	*ft_strsub(char const *s, unsigned int str, size_t len)
{
	char			*real;

	if (!s || !(real = ft_memalloc(len + 1)))
		return (NULL);
	real = ft_strncpy(real, (char*)s + str, len);
	return (real);
}
