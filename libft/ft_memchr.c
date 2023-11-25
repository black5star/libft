
#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)tmp);
		tmp++;
		i++;
	}
	return ((void *)0);
}
