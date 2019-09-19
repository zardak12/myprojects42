
#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *mal;

	mal = malloc(size);
	if (mal == NULL)
		return (NULL);
	else
		ft_bzero(mal,size);
		return (mal);
}
